# The settings below are only required if enable_tracking is set to true
string tracking_frame # The frame to be tracked
string relative_frame # The frame to recored the tracked_frame pose relative to
float32 translation_distance # The minimum translation distance in meters required before recording another image
float32 rotational_distance # The minimum rotational distance required before recording another image
bool live # Whether or not to do integration live, may cause loss of some data

industrial_reconstruction_msgs/TSDFVolumeParams tsdf_params
industrial_reconstruction_msgs/RGBDImageParams rgbd_params

