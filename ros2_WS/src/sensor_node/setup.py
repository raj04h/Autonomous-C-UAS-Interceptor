from setuptools import find_packages, setup

package_name = 'sensor_node'

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
    maintainer='himanshu-raj',
    maintainer_email='himanshuraj.hr9934@gmail.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    extras_require={
        'test': [
            'pytest',
        ],
    },
    entry_points={
        'console_scripts': [
            'telemetry_publisher = sensor_node.telemetry_publisher:main',
            'vehicle_status_publisher = sensor_node.vehicle_status_publisher:main',
            'camera_listener = sensor_node.camera_listener:main',
        ],
    },
)
