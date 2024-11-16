import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/root/RBE500_Manipulator_Project/workspace/install/rbe500_example_py'
