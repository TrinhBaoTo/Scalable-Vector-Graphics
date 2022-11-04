#include "ellipse.h"
#include <fstream>
#include <iostream>

using namespace std;

// operator<< equivalent to write the ellipse out
ostream &Ellipse::write(ostream &out) const {

  // setting up the ellipse to the output file
  out << "      <ellipse ";
  out << "cx=\"" << cx << "\" ";
  out << "cy=\"" << cy << "\" ";
  out << "rx=\"" << rx << "\" ";
  out << "ry=\"" << ry << "\" ";
  out << "fill=\"" << color << "\" ";
  out << "stroke=\"" << colorS << "\" ";
  out << "stroke-width=\"" << widthS << "\" ";
  out << " />" << endl;

  return out;
}

// operator>> equivalent to read the ellipse contents
istream &Ellipse::read(istream &in) {

  // reading ellipse data from the file
  in >> cx >> cy >> rx >> ry >> color >> colorS >> widthS;
  return in;
}