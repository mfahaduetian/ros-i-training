
bool success
string id # Name/Id of the environment
uint64 revision # The revision number of the modified environment, these should match after applying commands to local copy of environment

tesseract_msgs/EnvironmentCommand[] command_history
tesseract_msgs/Link[] links
tesseract_msgs/Joint[] joints
string[] link_names
string[] joint_names
string[] active_link_names
string[] active_joint_names
tesseract_msgs/TransformMap link_transforms
tesseract_msgs/TransformMap joint_transforms
tesseract_msgs/AllowedCollisionEntry[] allowed_collision_matrix
tesseract_msgs/KinematicsInformation kinematics_information
sensor_msgs/JointState joint_states
