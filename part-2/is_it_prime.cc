// Grace Lee
// CPSC 120-01
// 2021-10-22
// grace1@csu.fullerton.edu
// @gracelee2
//
// Lab-06-02
//
// Command line program that verifies if the given number is prime or not.
//

/// \file is_it_prime.cc

#include <iostream>
#include <vector>

#include "is_it_prime_functions.h"

using namespace std;

/// Main function for the is_it_prime project.
///
/// The program uses command line arguments. It requires at least one argument
/// which must be a postive integer between 1 and 2147483647.
int main(int argc, char const* argv[]) {
  vector<string> args = vector<string>(argv, argv + argc);
  if (args.size() < 2) {
    cout << "Please provide a number to check.\n";
    cout << "For example:\n";
    cout << "./is_it_prime 2147483647\n";
    try {
      cout << args.at(0) << "2147483647"
           << "\n";
    } catch (out_of_range const& problem) {
      cout << "Uh-oh, you went out of bounds.\n";
      cout << problem.what() << "\n";
      return 1;
    }
    return 1;
  }
  int input_number = 0;
  try {
    input_number = stoi(args.at(1));
  } catch (const exception& problem) {
    cout << "There was a problem reading the input number.\n";
    cout << problem.what() << "\n";
    return (1);
  }
  if (IsPrime(input_number) == true) {
    cout << input_number << " is prime.\n";
  } else {
    cout << input_number << " is not prime.\n";
  }

  return 0;
}
