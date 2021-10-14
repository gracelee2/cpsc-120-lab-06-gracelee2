
/// \file rectangle_area.cc
/// Command line program that computes the area of the rectangle.

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
  // TODO: Convert argv to a vector<string>. Name this variable args
  if(args.size() < 3){
    cout <<"You need to provide a lenght and width. \n";
    //cout <<
    //cout <<
    try{
    cout << args.at(0) << "3,4" << "\n";
  } catch(exception const& problem){
    cout << problem.what();
    return 1;
  }
  return 1;
  }
  int input_length = 0;
  int input_width = 0;

  try{
    input_width = stoi(args.at(2));
    input_length = stoi(args.at(1));
  } catch(exception const& problem){
    cout << problem.what();
    return 1;
  }
  int area =0;
  area = RectangleArea(input_length, input_width);
  // TODO: Check to make sure there are enough arguments on the command line
  // for your program to continue. You need to have the length and width.
  // Look at the Example Output section of the README for the text of the
  // error message. Don't forget to use try and catch.
  // TODO: If there aren't enough arguments, return 1 (end the program).
  // TODO: Declare two int variables, input_length and input_width

  // TODO: Use stoi() and convert argument 1 and argument 2 from strings
  // to integers. Store arugment 1 in input_length and argument 2 in
  // input_width. Don't forget to use try and catch.
  // TODO: Declare an integer variable named area.
  // TODO: Calculate the area using RectangleArea(), assign the returned value
  // to the variable named area.
  // TODO: Print out a message reporting the results. Look at the Example Output
  // section of the README for tips on how to format the output.
  return 0;
}
