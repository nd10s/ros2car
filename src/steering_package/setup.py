from setuptools import setup

package_name = 'steering_package'

setup(
    name=package_name,
    version='0.0.1',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='ndt',
    maintainer_email='thoennesn@gmail.com',
    description='Controls the steering servo. PWM, Range 0-90 degrees.',
    license='Apache 2.0 License',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'steering_node = steering_package.steering_node:main'
        ],
    },
)
