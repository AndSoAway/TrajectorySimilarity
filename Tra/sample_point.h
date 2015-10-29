#ifndef GEO_SAMPLE_POINT_H
#define GEO_SAMPLE_POINT_H
#include "../Geo/point.h"

const int TIMESTAMP_LEN = 20;
const int DEFAULT_VEHICAL_ID = -1;
const int DEFAULT_HEADING_ANGLE_NORTH = 0;
const int DEFAULT_SPEED = 0;
const bool DEFAULT_LOADED = false;

class SamplePoint : public Point{
public:
  SamplePoint() :vehical_id_(DEFAULT_VECHICAL_ID), heading_angle_north_(DEFAULT_HEADING_ANGLE_NORTH),
        speed_(DEAULT_SPEED), loaded_(DEFAULT_LOADED), timestamp_str_(NULL) { Point(); }

  SamplePoint(double latitude, double longitude, int vehical_id, double heading_angle_north, double speed, bool loaded, char *timestamp_str);

  int vehical_id() { return vehical_id_; }
  double heading_angle_north() { return heading_angle_north_; }
  double speed() { return speed_; }
  bool loaded() { return loaded_; }
  char* timestamp_str() { return timestamp_str_; }
private:
  int vehical_id_;
  double heading_angle_north_;
  double speed_;
  bool loaded_;
  char timestamp_str_[TIMESTAMP_LEN];
};
#endif
