from setuptools import find_packages
from setuptools import setup

setup(
    name='pick_and_place_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('pick_and_place_msgs', 'pick_and_place_msgs.*')),
)
