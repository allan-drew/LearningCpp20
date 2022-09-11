#include <iostream>

#include <iomanip> //Used to enable 'setprecision' configuration


int main() {

    /////////////////// FRACTIONAL NUMBERS  ////////////////

    //// FLOATING POINT TYPES //////

    //// FLOAT / DOUBLE / LONG DOUBLE
    // FLOAT => SIZE (4 BYTES) => 7 DIGITS PRECISION // VARIATION: +-3.4028 x 10^+-38
    // DOUBLE => SIZE (8 BYTES) => 16 DIGITS PRECISION // VARIATION: +- 1.7977 x 10^+-308
    // LONG DOUBLE => 16 ??? BYTES => 19 DIGITS PRECISION

    std::cout << std::setprecision(22); // CONTROL THE PRECISION FROM std::cout
    // need to include iomanip

    float test_float {1.12345678901234567890f}; // "f"
    std::cout << test_float << "  SIZE OF FLOAT : " << sizeof(float) << " BYTES // " << " PRECISION = 7 DIGITS (incluindo o numero antes da virgula)" << std::endl;

    double test_double {1.12345678901234567890}; //don't need sufix. Default will be 'double'
    std::cout << test_double << "  SIZE OF DOUBLE : " << sizeof(double) << " BYTES // " << " PRECISION = 16 DIGITS (incluindo o numero antes da virgula)" << std::endl;

    long double test_longdouble {1.12345678901234567890L}; // "L"
    std::cout << test_longdouble << "  SIZE OF LONG DOUBLE ????: " << sizeof(long double) << " BYTES // " << " PRECISION = 19 DIGITS (incluindo o numero antes da virgula) " << std::endl;


    std::cout << std::endl;
// ==================================================================================================

    // Scientific notation
    double test_sn {0.000349};
    double test_sn2 {3.49e-4};

    std::cout << test_sn << std::endl;
    std::cout << test_sn2 << std::endl;


    std::cout << std::endl;
// ==================================================================================================


    // INFINITY ==> n(floating point)/0
    double number1 {7.5};
    double number2 {}; //INITIALIZED TO 0
    double number3 {}; //INITIALIZED TO 0
    double number4 {-10};

    double result { number1 / number2};
    std::cout << number1 << " / " << number2 << " = " << result << std::endl;
    std::cout << result << " + " << number1 << " = " << result + number1 << std::endl;    

    double result2 { number4 / number2};
    std::cout << number4 << " / " << number2 << " = " << result2 << std::endl;


    // NaN ==> 0.0 / 0.0
    result = number2 / number3;
    std::cout << number2 << " / " << number3 << " = " << result << std::endl; 

    
    return 0;
}
