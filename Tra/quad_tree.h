#ifndef _TRA_QUADTREE_H_
#define _TRA_QUADTREE_H_

#include "trajectory.h"
#include "../Geo/rectangle.h"

#include <unorderedmap>

struct Indexes{
  int begin;
  int end;
};

class QuatreeNode {
public:
  explicit QuadtreeNode(const Rectangle& mbr, int depth = 0) : p_parent_(NULL), pp_child_(NULL), depth_(depth) {
    id_ = node_id++;
    mbr_ = new Rectangle(mbr);
  }

  virtual ~QuadtreeNode();

  bool ContainTrajectory(const Trajectory&);

  void FindIntersectSegments(const Trajectory& traj, vector<Indexes>& indexes);

private:
  Rectangle* mbr_;
  int id_;
  int depth_;
  
  QuadtreeNode* p_parent_;
  QuadtreeNode** pp_child_; 
  std::unorderedmap<Trajectory*, vector<Indexes>> contain_segements_

  static int node_id;
};

int QuadtreeNode::node_id = 0;

class Quadtree {
public:
  void QuadtreeAdd(const Trajectory& trajectory, QuadtreeNode* p_root);
  void QuadtreeInit(const Rectangle& rectangle);
  void QuadtreeFind(const Trajectory& query, QuadtreeNode* leaf_node);

private:

};
#endif
