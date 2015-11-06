#ifndef GEO_RECTANGLE_H_
#define GEO_RECTANGLE_H_
#include "quad.h"
#include "point.h"

extern const int kChildCount = 4;

class Rectangle : public Quad {
public:
  Rectangle(const Point& left_bottom, const Point& right_upper) : left_bottom_(left_bottom), right_upper_(right_upper), splitted(false) { 
  double center_x = (left_bottom.x() + right_upper.x()) / 2;
  double center_y = (left_bottom.y() + right_upper.y()) / 2;
  center_point = Point(center_x, center_y);
}

  bool ContainPoint(const Point& point) const;

  bool IntersectSegment(const Point& point1, const Point& point2)const;

  bool IntersectRectangle(const Rectangle& rectangle)const;

  
  const Point left_bottom() const { return left_bottom_; }
  const Point right_upper() const { return right_upper_; }
  Rectangle* SpiltNode();

  void FindCenterPoint(Point * center_point) { 
    center_point->set_x(center_point_.x());
    center_point->set_y(center_point_.y());
}

 virtual ~Rectangle() { }

private:
  Point left_bottom_;
  Point right_upper_;
  Point center_point_;
  bool splitted_;
  Rectangle children_[kChildCount];
};
#endif
