#ifndef GEO_QUAD_H_
#define GEO_QUAD_H_
class Quad {
public:
  bool ContainPoint(const Point& point) const = 0;
  bool IntersectSegment(const Point& point1, const Point& point2) const = 0
};
#endif
