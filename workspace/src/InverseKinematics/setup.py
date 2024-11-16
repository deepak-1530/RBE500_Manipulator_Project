from setuptools import setup

package_name = 'InverseKinematics'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='Your Name',
    maintainer_email='your_email@example.com',
    description='A ROS 2 package for inverse kinematics of a robot arm',
    license='Your License',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'InverseKinematics = InverseKinematics.InverseKinematics:main',
        ],
    },
)

