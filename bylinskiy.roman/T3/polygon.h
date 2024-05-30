#ifndef POLYGON_H
#define POLYGON_H

#include <iostream>
#include <vector>

#include "delimeter.h"

namespace bylinskiy
{
  struct Point
  {
    int x, y;
    bool operator==(const Point & other) const;
  };
  struct Polygon
  {
    std::vector< Point > points;
  };
  struct Triangle
  {
    Point first;
    double operator()(double, const Point &, const Point &);
  };
  double getArea(const Polygon & polygon);
  std::istream & operator>>(std::istream & in, Point & point);
  std::ostream & operator<<(std::ostream & out, const Point & point);
  std::istream & operator>>(std::istream & in, Polygon & polygon);
  std::ostream & operator<<(std::ostream & out, const Polygon & polygon);
}

#endif
