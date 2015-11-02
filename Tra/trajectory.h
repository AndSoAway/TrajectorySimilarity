#ifndef TRA_TRAJECTORY_H
#define TRA_TRAJECTORY_H
#include <vector>
#include "sample_point.h"
class Trajectory {
public:
  Trajectory() 

private:
  static int tra_counter_;
  int vehicalId;
  std::vector<SamplePoint> point_list_;
  std::vector<Buffer> buffer_list_;

};

int Trajectory::tra_counter_ = 1;
#endif
