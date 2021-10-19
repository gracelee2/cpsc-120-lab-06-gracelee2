// Grace Lee
// CPSC 120-01
// 2021-10-14
// grace1@csu.fullerton.edu
// gracelee2
//
// Lab-06-02
//
// Function definitions used in this project
//
/// \file functions.cc

/// Calculate the integer square root of \p input_number using Heron's Method.
///
/// The integer square root is defined as the floor of the square root of
/// \p input_number, \f$\textrm{isqrt}(x) = \lfloor \sqrt{x} \rfloor\f$.
///
/// Heron's method dates back to 1 CE. The algorithm is defined as:
/// \f$x_{k+1} = \frac{1}{2}\left(x_k + \frac{n}{x_k}\right),
/// k \geq 0, x_0 > 0\f$.
///
/// More information about Heron's Method can be found at
/// https://en.wikipedia.org/wiki/Integer_square_root.
///
/// Typical usage:
/// \code
///   int candidate = 5;
///   int square_root = IntegerSquareRoot(candidate);
/// \endcode
///
/// \param input_number a positive integer between 0 and 2147483647
/// \returns the integer square root of \p input_number, if input_number
/// is negative, -1 is returned.
int IntegerSquareRoot(int input_number) {
  int square_root = 0;
  int initial_estimate = input_number / 2;
  if (initial_estimate == 0) {
    square_root = input_number;
  } else if (initial_estimate < 0) {
    square_root = -1;
  } else {
    int next_estimate =
        (initial_estimate + input_number / initial_estimate) / 2;

    while (next_estimate < initial_estimate) {
      initial_estimate = next_estimate;
      next_estimate = (initial_estimate + input_number / initial_estimate) / 2;
    }
    square_root = next_estimate;
  }
  return square_root;
}

/// Given \p number, determine if \p number is prime or not using
/// [Fibonacci's Trial Division](https://en.wikipedia.org/wiki/Trial_division)
/// algorithm.
///
/// The \p number shall be a positive integer. The function returns true if
/// the \p number is prime. The function returns false if the \p number is not
/// prime or if the \p number is outside of the accepted range. In other words,
/// 1 < number < 2147483647. Values less than or equal to 1 are not prime.
///
/// Typical usage:
/// \code
///   int candidate = 13;
///   bool is_number_prime = IsPrime(candidate);
/// \endcode
///
/// \param number a positive integer between 2 and 2147483647
/// \returns true if \p number is prime, false otherwise
int input_number = 0;
bool IsPrime(int number) {
  bool is_prime_flag = false;
  if(number <= 1){
    is_prime_flag = false;
  }
  for (int counter = 2; counter <= IntegerSquareRoot(input_number); counter++){
     if (input_number % counter == 0) {
      is_prime_flag = false;

    }else{
      is_prime_flag = true;
      break;
    }
  }
  return is_prime_flag;
}
