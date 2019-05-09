#! /usr/bin/python
# Copyright (c) 2015, Rethink Robotics, Inc.

# Using this CvBridge Tutorial for converting
# ROS images to OpenCV2 images
# http://wiki.ros.org/cv_bridge/Tutorials/ConvertingBetweenROSImagesAndOpenCVImagesPython

# Using this OpenCV2 tutorial for saving Images:
# http://opencv-python-tutroals.readthedocs.org/en/latest/py_tutorials/py_gui/py_image_display/py_image_display.html
# rospy for the subscriber
import rospy
# ROS Image message
from sensor_msgs.msg import CompressedImage
# ROS Image message -> OpenCV2 image converter
from cv_bridge import CvBridge, CvBridgeError
# OpenCV2 for saving an image
import cv2

# qr handling
import numpy as np
import apriltag
import math

# Instantiate CvBridge
bridge = CvBridge()


# camera parameters
CAMERA_PARAMETERS = [303.757084, 301.780095, 315.96771936, 240.6446990816899]

# duckie setup
DUCKIE = 'duckie1'

# detector setup
detector = apriltag.Detector()
def isclose(x, y, rtol=1.e-5, atol=1.e-8):
    return abs(x-y) <= atol + rtol * abs(y)

def localization(
def euler_angles_from_rotation_matrix(R):
    '''
    From a paper by Gregory G. Slabaugh (undated),
    "Computing Euler angles from a rotation matrix
    '''
    phi = 0.0
    if isclose(R[2,0],-1.0):
        theta = math.pi/2.0
        psi = math.atan2(R[0,1],R[0,2])
    elif isclose(R[2,0],1.0):
        theta = -math.pi/2.0
        psi = math.atan2(-R[0,1],-R[0,2])
    else:
        theta = -math.asin(R[2,0])
        cos_theta = math.cos(theta)
        psi = math.atan2(R[2,1]/cos_theta, R[2,2]/cos_theta)
        phi = math.atan2(R[1,0]/cos_theta, R[0,0]/cos_theta)
    return psi, theta, phi

def image_callback(msg):
    try:
        # Convert your ROS Image message to OpenCV2
        cv2_img = bridge.compressed_imgmsg_to_cv2(msg, "bgr8")
        gray = cv2.cvtColor(cv2_img, cv2.COLOR_BGR2GRAY)
        img_shape = gray.shape
        result = detector.detect(gray)
        if len(result) > 0:
            print('-----start----')
            for tag in result:
                center = tag.center
                center[0] = center[0] / img_shape[1]
                center[1] = center[1] / img_shape[0]
                tag_id = tag.tag_id
		print('---')
                result_str = 'id: {} center: {}'.format(tag_id, center)

                print(result_str)
                pose, _, _ = detector.detection_pose(tag, CAMERA_PARAMETERS)
                R = pose[0:3, 0:3]
                t = pose[0:3, 3]

		# only theta matters the most, the others are not really interesting
		psi, theta, phi = euler_angles_from_rotation_matrix(R)
		print('psi: {}, theta: {}, phi: {}'.format(psi, theta, phi))
		print('t: {}'.format(t))
		# print('pose: {}'.format(pose))
		print('---')

            print('------end-----')
    except CvBridgeError, e:
        print(e)

def main():
    rospy.init_node('image_listener')
    # Define your image topic
    image_topic = '/' + DUCKIE + '/camera_node/image/compressed'
    print('listening on ' + image_topic)
    # Set up your subscriber and define its callback
    rospy.Subscriber(image_topic, CompressedImage, image_callback)
    # Spin until ctrl + c
    rospy.spin()

if __name__ == '__main__':
    main()
