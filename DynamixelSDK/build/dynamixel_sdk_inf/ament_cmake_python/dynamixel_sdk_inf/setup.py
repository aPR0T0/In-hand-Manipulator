from setuptools import find_packages
from setuptools import setup

setup(
    name='dynamixel_sdk_inf',
    version='3.7.40',
    packages=find_packages(
        include=('dynamixel_sdk_inf', 'dynamixel_sdk_inf.*')),
)
