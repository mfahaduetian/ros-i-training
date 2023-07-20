from setuptools import find_packages
from setuptools import setup

setup(
    name='tesseract_msgs',
    version='0.18.0',
    packages=find_packages(
        include=('tesseract_msgs', 'tesseract_msgs.*')),
)
