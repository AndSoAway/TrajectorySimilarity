#ifndef __POINT__H__
#define __POINT__H__

Class Point {
public:
  Point(double x = 0, double y = 0) : x_(x), y_(y) { }

  double x() { return x_; }
  double y() { return y_; }

  void set_x(double x) { x_ = x; }
  void set_y(double y) { y_ = y; }
  virtual ~Point() { }
private:
  double x_;
  double y_;

};
#endif
