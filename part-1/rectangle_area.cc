// Grace Lee
// CPSC 120-01
// 2021-10-14
// grace1@csu.fullerton.edu
// @gracelee2
//
// Lab-06-01
//
// Command line program that computes the area of the rectangle.
/// \file rectangle_area.cc

#include <iostream>
#include <vector>

#include "rectangle_area_functions.h"

using namespace std;

/// Main function for the rectangle_area project.
///
/// The program uses command line arguments. It requires at least two arguments
/// which each must be integers between 1 and 2147483647.
int main(int argc, char const* argv[]) {
  vector<string> args = vector<string>(argv, argv + argc);
  if (args.size() < 3) {
    cout << "Please provide two arguments, a rectangle's length and width.\n";
    cout << "For example:\n";
    cout << "./rectangle_area 23 17\n";
    try {
      cout << args.at(0) << "3 4"
           << "\n";
    } catch (exception const& problem) {
      cout << problem.what();
      return 1;
    }
    return 1;
  }
  int input_length = 0;
  int input_width = 0;

  try {
    input_length = stoi(args.at(1));
    input_width = stoi(args.at(2));
  } catch (exception const& problem) {
    cout << problem.what();
    return 1;
  }
  int area = 0;
  area = RectangleArea(input_length, input_width);

  cout << input_length << " x " << input_width << " = " << area << "\n";
  return 0;
}
