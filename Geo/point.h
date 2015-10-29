#ifndef __POINT__H__
#define __POINT__H__

Class Point {
public:
  Point(double latitude = 0, double longitude = 0) : latitude_(latitude), longitude_(longitude) { }

  double latitude() { return latitude_; }
  double longitude() { return longitude_; }

  virtual ~Point() { }
private:
  double latitude_;
  double longitude_;

};
#endif
