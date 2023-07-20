from setuptools import find_packages
from setuptools import setup

setup(
    name='industrial_reconstruction_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('industrial_reconstruction_msgs', 'industrial_reconstruction_msgs.*')),
)
