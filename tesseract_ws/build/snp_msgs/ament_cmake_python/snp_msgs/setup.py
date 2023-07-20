from setuptools import find_packages
from setuptools import setup

setup(
    name='snp_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('snp_msgs', 'snp_msgs.*')),
)
