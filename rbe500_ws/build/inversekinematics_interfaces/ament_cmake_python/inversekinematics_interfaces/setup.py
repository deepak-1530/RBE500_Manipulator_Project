from setuptools import find_packages
from setuptools import setup

setup(
    name='inversekinematics_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('inversekinematics_interfaces', 'inversekinematics_interfaces.*')),
)
