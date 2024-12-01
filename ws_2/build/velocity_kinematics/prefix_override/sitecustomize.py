import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/root/RBE500_Manipulator_Project/ws_2/install/velocity_kinematics'
