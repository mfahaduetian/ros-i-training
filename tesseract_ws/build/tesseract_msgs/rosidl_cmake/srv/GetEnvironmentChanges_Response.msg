
bool success
string id # Name/Id of the environment
uint64 revision # The revision number of the modified environment, these should match after applying commands to local copy of environment
tesseract_msgs/EnvironmentCommand[] commands
