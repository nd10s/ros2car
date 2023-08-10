import rclpy
from rclpy.node import Node

from std_msgs.msg import Float64
from geometry_msgs.msg import Twist

import numpy as np

#x_msg = Float64()
#z_msg = Float64()


#collect x and z data from /cmd_vel topic
#x is the left stick, used for forward and backward linear velocity, -2000 to 2000
#z is the right stick, used for right and left steering angle, -90 to 90
class DS4_Subscriber(Node):
    def __init__(self):
        super().__init__('DS4_Subscriber_Node')
        self.subscriber = self.create_subscription(
                                Twist, 
                                'cmd_vel', 
                                self.pushToVESC, 
                                10)
        self.publisher = self.create_publisher(
                                Float64, 
                                'commands/motor/speed',
                                10)
        
    def pushToVESC(self, msg):
        x_msg = Float64()
        x_msg.data = msg.linear.x
        self.publisher.publish(x_msg)


"""
class VESC_and_Servo_Publisher(Node):
    def __init__(self):
        super().__init__('VESC_and_Servo_Publisher')
        self.publisher_ = self.create_publisher(
                                Float64, 
                                '/commands/motor/speed',
                                10)
        timer_period = 0.1 #seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)
        self.i = 0
    def timer_callback(self):
        self.publisher_.publish(x_msg)
        self.get_logger().info('Publishing: ' + 'X: ' + str(x_msg) + 'Z: ' + str(z_msg))
        self.i += 1
"""

def main(args=None):
    print('Hi from drive_with_DS4.')
    rclpy.init(args=args)
    DS4_Subscriber_ = DS4_Subscriber()
    rclpy.spin(DS4_Subscriber_)


if __name__ == '__main__':
    main()
