#include "line.h"
#include <fstream>
#include <iostream>

using namespace std;

// operator<< equivalent to write the line out
ostream &Line::write(ostream &out) const {

  // setting up the line to the output file
  out << "      <line ";
  out << "x1=\"" << x1 << "\" ";
  out << "y1=\"" << y1 << "\" ";
  out << "x2=\"" << x2 << "\" ";
  out << "y2=\"" << y2 << "\" ";
  out << "stroke=\"" << colorS << "\" ";
  out << "stroke-width=\"" << widthS << "\" ";
  out << " />" << endl;

  return out;
}

// operator>> equivalent to read the line contents
istream &Line::read(istream &in) {

  // reading line data from the file
  in >> x1 >> y1 >> x2 >> y2 >> colorS >> widthS;
  return in;
}