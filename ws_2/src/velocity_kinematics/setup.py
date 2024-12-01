from setuptools import find_packages, setup

package_name = 'velocity_kinematics'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='root',
    maintainer_email='say2deepaksingh@gmail.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
	 'joint_to_endeffector_velocity_service = velocity_kinematics.joint_to_endeffector_node:main',
         'endeffector_to_joint_velocity_service = velocity_kinematics.endeffector_to_joint_node:main'
        ],
    },
)
