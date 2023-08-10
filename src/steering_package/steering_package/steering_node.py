from adafruit_servokit import ServoKit
import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist

class SteeringNode(Node):
    #pca stuff
    _pca = ServoKit(channels=16)
    def __init__(self):
        super().__init__('steering_node')
        self.subscription = self.create_subscription(
            Twist,
            'cmd_vel',
            self.send_to_servo,
            10
        )
        self.subscription

    def send_to_servo(self, msg):
        servo_degree = (msg.angular.z - 45.0)*-1
        self.get_logger().info('I heard: "%s"' % servo_degree)
        self._pca.servo[0].angle = int(abs(servo_degree))


def main(args=None):
    #ros2 stuff
    rclpy.init(args=args)
    steering_node = SteeringNode()
    rclpy.spin(steering_node)
    steering_node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
