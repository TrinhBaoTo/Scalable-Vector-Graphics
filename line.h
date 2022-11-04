/**
 * SVG Line
 **/

#ifndef LINE_H
#define LINE_H

#include "svg.h"
#include <iostream>
#include <string>

using namespace std;

class Line : public SVG {

public:
  // operator<< equivalent to write the object out
  ostream &write(ostream &out) const override;

  // operator>> equivalent to read the object contents
  istream &read(istream &in) override;

private:
  // start line coordinate
  int x1{0}, y1{0};

  // end line coordinate
  int x2{0}, y2{0};

  // stroke's color and width
  int widthS{5};
  string colorS{"black"};
};

#endif
