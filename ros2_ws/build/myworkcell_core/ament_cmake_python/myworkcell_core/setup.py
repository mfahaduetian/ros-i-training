from setuptools import find_packages
from setuptools import setup

setup(
    name='myworkcell_core',
    version='0.0.0',
    packages=find_packages(
        include=('myworkcell_core', 'myworkcell_core.*')),
)
