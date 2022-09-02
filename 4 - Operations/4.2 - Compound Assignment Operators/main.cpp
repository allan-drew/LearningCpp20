#include <iostream>

int main() {

    
   //////////////////// Compound Assignment Operators ///////////////////
     
    int value {45};
    std::cout << " THE VALUE IS : " << value << std::endl;;

    value += 5; ////// equivalent to ==> value = value + 5
    std::cout << " The value is (after +=5): " << value << std::endl;

    value -= 5; ////// equivalent to ==> value = value - 5
    std::cout << " The value is (after -=5): " << value << std::endl;

    value *= 2;
    std::cout << " The value is (after *=2): " << value << std::endl;

    value /= 3;
    std::cout << " The value is (after /=3): " << value << std::endl;

    value %= 11;
    std::cout << " The value is (after %=2): " << value << std::endl;


    return 0;
}
