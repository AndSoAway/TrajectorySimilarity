#ifndef GEO_RECTANGLE_H_
#define GEO_RECTANGLE_H_
#include "quad.h"
#include "point.h"

class Rectangle : public Quad {
public:
  bool ContainPoint(const Point& point) const;

  bool IntersectSegment(const Point& point1, const Point& point2);

  bool IntersectRectangle(const Rectangle& rectangle);

  const Point left_bottom() const { return left_bottom_; }
  const Point right_upper() const { return right_upper_; }
private:
  Point left_bottom_;
  Point right_upper_;
};
#endif
