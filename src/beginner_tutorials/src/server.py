#! /usr/bin/python2

import rospy
from beginner_tutorials.srv import add_two_int,add_two_intResponse

response = add_two_intResponse()

def add_ints(req):
    print('Adding {} + {} '.format(req.a,req.b))
    response.sum = req.a + req.b
    return response


rospy.init_node('add_two_int_server')

srv = rospy.Service('add_two_int',add_two_int,add_ints)

print('Server is ready')

rospy.spin()