#include <iostream>

int main() {

///////////////  BASIC OPERATIONS ///////////////
    
    //////////////// ADDITION ////////
    int number1 {50};
    int number2 {10};

    int result = number1 + number2;
    std::cout << " RESULT : " << number1 << " + " << number2 << " = " << result << std::endl;
    

    //////////////// SUBTRACTION ////////
    result = number1 - number2;
    std::cout << " RESULT : " << number1 << " - " << number2 << " = " << result << std::endl;

    result = number2 - number1;
    std::cout << " RESULT : " << number2 << " - " << number1 << " = " << result << std::endl;


    ///////////// MULTIPLICATION ///////////
    result = number1 * number2;
    std::cout << " RESULT : " << number1 << " x " << number2 << " = " << result << std::endl;


    /////////// DIVISION //////////////
    float number3 {2};
    float number4 {7};
    result = number4 / number3;
    std::cout << " RESULT (INT): " << number4 << " / " << number3 << " = " << result << std::endl;

    float result2 = number4 / number3;
    std::cout << " RESULT (FLOAT): " << number4 << " / " << number3 << " = " << result2 << std::endl;


    ///////// MODULUS (REMAINDER) ////////////
    int number5 {3};
    int number6 {10};
    result = number6 % number5;
    std::cout << " RESULT (MODULUS): " << number6 << " / " << number5 << " = " << result << std::endl;


    return 0;
}
