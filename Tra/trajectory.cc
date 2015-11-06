#include "trajectory.h"

using namespace std;

Trajectory::Trajectory() {
  tra_id_ = tra_counter++;
}

Trajectory::~Trajectory() {
  for (vector<SamplePoint*>::iterator itor = point_list_.begin(); itor != point_list_end(); itor++) {
    delete (*itor);
  }
  point_list_.clear();
  for (vector<SamplePoint*>::iterator itor = buffer_list_.begin(); itor != buffer_list_.end(); itor++) {
    delete (*itor);
  }

  buffer_list_.clear();
}

void Trajectory::PushBackPoint(const SamplePoint& sample_point) {
  SamplePoint tmp_point = sample_point;
  point_list_.push_back(&tmp_point);
}

void Trajectory::buffer_list() {
  int begin_index = 0;
  if ((begin_index = NeedFixBuffer()) != -1) {
    FixBuffer(begin_index);
  }

  return buffer_list_;
}

int Trajectory::NeedFixBuffer() { 
  if (point_list_.empty() || point_list_.size() == buffer_list_.size() + 1)
    return -1;

  if (point_list_.size() > buffer_list_.size() + 1) {
    return buffer_list_.size() + 1;
  } else {
    return 0;
  }
}

void Trajectory::FixBuffer(int begin) {
  for (int index = begin; index < point_list_.size() - 1; index++) {
   buffer_list_.push_back(new Buffer(point_list_.get(begin), point_list_.get(begin + 1)));
  }
}
