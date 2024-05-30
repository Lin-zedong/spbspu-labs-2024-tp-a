#ifndef DELIMETER_H
#define DELIMETER_H
#include <iostream>

namespace bylinskiy
{
  struct Delimeter
  {
    char expected;
  };

  struct DelimeterString
  {
    std::string expected;
  };

  std::istream & operator>>(std::istream & in, const Delimeter && exp);
  std::istream & operator>>(std::istream & in, const DelimeterString && exp);
}

#endif
