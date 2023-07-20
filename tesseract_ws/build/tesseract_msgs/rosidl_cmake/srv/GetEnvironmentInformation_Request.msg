# You can combine the requests using a bitwise OR operation (In C++, use
# the | operator).  They are extracted from the `flags` variable using a
# bitwise AND operator.
uint16 COMMAND_HISTORY=1             # Get the current change history

uint16 LINK_LIST=2                   # Get the current list of links
uint16 JOINT_LIST=4                  # Get the current list of joints

uint16 LINK_NAMES=8                  # Get the current list of links names
uint16 JOINT_NAMES=16                # Get the current list of joint names

uint16 ACTIVE_LINK_NAMES=32          # Get the current list of active links
uint16 ACTIVE_JOINT_NAMES=64         # Get the current list of active joints

uint16 LINK_TRANSFORMS=128           # Get the current list of link transforms
uint16 JOINT_TRANSFORMS=256          # Get the current list of joint transforms

uint16 ALLOWED_COLLISION_MATRIX=512  # Get the current allowed collision matrix

uint16 KINEMATICS_INFORMATION=1024   # Get the current kinematics information

uint16 JOINT_STATES=2048              # Get the current kinematics information

uint16 flags # The flags indicating what information should be returned.
