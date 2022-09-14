#include <iostream>
#include <cmath>

int main() {

    ///////////// MATH FUNCTIONS ////////////////
    std::cout << std::endl;
   
    double weight { 7.7 };
    std::cout << "Weight is : " << weight << std::endl; 
    
    //floor
    std::cout << "  Weight rounded to floor is : " << std::floor(weight) << std::endl;
    
    //ceil 
    std::cout << "  Weight rounded to ceil is : " << std::ceil(weight) << std::endl;

    //abs
    std::cout << "  Abs of weight is : " << std::abs(weight) << std::endl;
    
    std::cout << "--------------------------------------------------" << std::endl;


    double savings {-5000 };
    std::cout << "Savings is : " << savings << std::endl;
    std::cout << "Abs of savings is : " << std::abs(savings) << " (The abs() function in C++ returns the absolute value of an integer number.) " << std::endl;
    std::cout << "--------------------------------------------------" << std::endl;

    //exp : f(x) = e ^ x , where e = 2.71828 . Test the result here against a calculator
    double exponential = std::exp(10);
    std::cout << "e^10 ----> The exponential of 10 is : " << exponential << std::endl;
    std::cout << "--------------------------------------------------" << std::endl;
    
    //pow
    std::cout << "3^4 is : " << std::pow(3,4) << std::endl;
    std::cout << "9^3 is : " << std::pow(9,3) << std::endl;
    std::cout << "--------------------------------------------------" << std::endl;


    //log : reverse function of pow. if 2^3 = 8 , log 8 in base 2 = 3.  
    // Log is like asking to which exponent should we elevate 2 to get 8


    // Log by default computes the log in base e. 
    // There also is another function which uses base 10 called log10
    
    std::cout << " Log is like asking to which exponent should we elevate X (base) to get Y (result) : \n" << std::endl;

    // Try the reverse operation of  e^4 = 54.59 , it will be log 54.59 in base e 
    std::cout << "log by default computes the log in base 'e' ( std::log() ): " << std::endl;
    std::cout << "      Which exponent should we elevate 'e' to get 54.59 ? : " << std::log(54.59) << std::endl;
    std::cout << "      To get 54.59, you'd need to elevate 'e' to the power of : " << std::log(54.59) << std::endl;
    std::cout << "      e ^ 4 = " << std::exp( 4 ) << std::endl;
    std::cout << "--------------------------------------------------" << std::endl;

    //log10 , 10 ^ 4 = 10000  , to get 10k , you'd need to elevate 10 to the power of ? , this is log in base 10
    std::cout << "There is also a function which uses base 10 ( std::log10() ): " << std::endl;
    std::cout << "      Which exponent should we elevate '10' to get 10 000 ? : " << std::endl;
    std::cout << "      To get 10000, you'd need to elevate 10 to the power of : " << std::log10(10000) << std::endl; // 4
    std::cout << "      10 ^ 4 = " << std::pow(10,4) << std::endl;

    std::cout << "--------------------------------------------------" << std::endl;


    //sqrt
    std::cout << "The square root of 81 is : " << std::sqrt(81) << std::endl;
    std::cout << "--------------------------------------------------" << std::endl;

    
    //round.
    std::cout << "3.654 rounded to : " << std::round(3.654) << std::endl;
    std::cout << "2.5 is rounded to : " << std::round(2.5) << std::endl;
    std::cout << "2.4 is rounded to : " << std::round(2.4) << std::endl;
    std::cout << "--------------------------------------------------" << std::endl;


    // cos / sin / tan
    // value representing angle in radians, of a floating-point or Integral type
    std::cout << "cos (0 radians = 0 grau) : " << std::cos(0) << std::endl;
    std::cout << "cos (0,785398 radians (pi/4) = 45 graus) : " << std::cos(0.785398) << std::endl;
    std::cout << "cos (1,5708 radians (pi/2) = 90 graus) : " << std::cos(1.5708) << std::endl;
    std::cout << "--------------------------------------------------" << std::endl;

    std::cout << "sin (0 radians = grau) : " << std::sin(0) << std::endl;
    std::cout << "sin (0,785398 radians (pi/4) = 45 graus) : " << std::sin(0.785398) << std::endl;
    std::cout << "sin (1,5708 radians (pi/2) = 90 graus) : " << std::sin(1.5708) << std::endl;

    std::cout << "--------------------------------------------------" << std::endl;

    std::cout << "tan (0 radians = 0 grau) : " << std::tan(0) << std::endl;
    std::cout << "tan (0,785398 radians (pi/4) = 45 graus) : " << std::tan(0.785398) << std::endl;
    std::cout << "tan (1,5708 radians (pi/2) = 90 graus) : " << std::tan(1.5708) << "ERROR" << std::endl;
    std::cout << "--------------------------------------------------" << std::endl;



    return 0;
}
