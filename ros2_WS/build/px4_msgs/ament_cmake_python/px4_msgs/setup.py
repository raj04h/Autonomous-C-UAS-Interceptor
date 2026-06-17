from setuptools import find_packages
from setuptools import setup

setup(
    name='px4_msgs',
    version='1.17.0',
    packages=find_packages(
        include=('px4_msgs', 'px4_msgs.*')),
)
