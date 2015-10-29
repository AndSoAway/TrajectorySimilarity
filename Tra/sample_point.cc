#include "sample_point.h"

SamplePoint::SamplePoint(double latitude, double longitude, int vehical_id, double heading_angle_north,
    double speed, bool loaded, char *timestamp_str) : Point(latitude, longitude) {
  vehical_id_ = vehica_id;
  heading_angle_north_ = heading_angle_north;
  speed_ = speed;
  loaded_ = loaded;
  strncp(timestamp_str_, timestamp_str, sizeof(timestamp_str_));
}
