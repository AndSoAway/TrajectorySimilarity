#include "Quadtree.h"

const int kChildrenCount = 4;

QuadtreeNode::~QuadtreeNode() {
  for (int i = 0; i < kChildrenCount; i++) {
    delete pp_child_[i];
  }
} 

bool ContainTrajectory(const Trajectory& traj) {
  return (contain_segments_.find(traj) == contain_segments_.end())
}

int QuadTree::QuadtreeAdd(const Trajectory& trajectory, QuadtreeNOde* p_root, vector<Indexes> intersect_indexes) {
  if ()
}
