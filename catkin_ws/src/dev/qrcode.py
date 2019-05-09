#! /usr/bin/python
import rospy
# ROS Image message
from sensor_msgs.msg import Image
# ROS Image message -> OpenCV2 image converter
from cv_bridge import CvBridge, CvBridgeError
# OpenCV2 for saving an image
import cv2

# qr handling
from pyzbar import pyzbar
import numpy as np

# Instantiate CvBridge
bridge = CvBridge()

# duckie setup

DUCKIE = 'duckie1'

def image_callback(msg):
    try:
        # Convert your ROS Image message to OpenCV2
        cv2_img = bridge.imgmsg_to_cv2(msg, "bgr8")
	mask = cv2.inRange(cv2_img,(0,0,0),(200,200,200))
    except CvBridgeError, e:
        print(e)
    else:
        # Save your OpenCV2 image as a jpeg 
	print('decoding...')
	mask = cv2.inRange(cv2_img,(0,0,0),(200,200,200))
	thresholded = cv2.cvtColor(mask,cv2.COLOR_GRAY2BGR)
	inverted = 255 - thresholded # black-in-white
	barcodes = pyzbar.decode(inverted)
	print(barcodes)


def main():
    rospy.init_node('image_listener')
    # Define your image topic
    image_topic = '/' + DUCKIE + '/decoder_node/image/compressed'
    # Set up your subscriber and define its callback
    rospy.Subscriber(image_topic, Image, image_callback)
    # Spin until ctrl + c
    rospy.spin()

if __name__ == '__main__':
    main()
