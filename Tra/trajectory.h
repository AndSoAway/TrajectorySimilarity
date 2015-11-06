#ifndef TRA_TRAJECTORY_H
#define TRA_TRAJECTORY_H
#include <vector>
#include "sample_point.h"
class Trajectory {
public:
  Trajectory(); 
  virtual ~Trajectory();
  
  void PushBackPoint(const SamplePoint& sample_point);
  void buffer_list();
  const Buffer* buffer(int index);

  void FindIntersectSegments(const Rectangle& rectangle, vector<Indexes>& intersect_segments, const vector<Indexes>& father_indexes)const;

 void FindIntersectSegments(const Rectangle& rectangle, vector<Indexes>& intersect_segments)const;
private:

  inline int NeedFixBuffer();
  void FixBuffer(int index);

  static int tra_counter;
  int tra_id_;
  std::vector<SamplePoint*> point_list_;
  std::vector<Buffer*> buffer_list_;

};

int Trajectory::tra_counter_ = 1;
#endif
