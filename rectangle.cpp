#include "rectangle.h"
#include <fstream>
#include <iostream>

using namespace std;

// operator<< equivalent to write the rectangle out
ostream &Rectangle::write(ostream &out) const {

  // setting up the rectangle to the output file
  out << "      <rect ";
  out << "x=\"" << x << "\" ";
  out << "y=\"" << y << "\" ";
  out << "width=\"" << width << "\" ";
  out << "height=\"" << height << "\" ";
  out << "fill=\"" << color << "\" ";
  out << "stroke=\"" << colorS << "\" ";
  out << "stroke-width=\"" << widthS << "\" ";
  out << " />" << endl;

  return out;
}

// operator>> equivalent to read the rectangle contents
istream &Rectangle::read(istream &in) {

  // reading rectangle data from the file
  in >> x >> y >> width >> height >> color >> colorS >> widthS;
  return in;
}