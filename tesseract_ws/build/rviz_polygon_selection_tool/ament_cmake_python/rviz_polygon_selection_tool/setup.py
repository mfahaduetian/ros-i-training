from setuptools import find_packages
from setuptools import setup

setup(
    name='rviz_polygon_selection_tool',
    version='0.1.0',
    packages=find_packages(
        include=('rviz_polygon_selection_tool', 'rviz_polygon_selection_tool.*')),
)
