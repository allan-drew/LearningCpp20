#include <iostream>

int main() {

//showpoint and noshowpoint : show trailing zeros if necessary
//Force output of the decimal point
    
    double d {34.1000};
    double e {101.99};
    double f {12.0};

    int    g {45};
    
    std::cout << std::endl;
    std::cout << "noshowpoint (default) : " << std::endl;
    std::cout << "d : " << d << std::endl;
    std::cout << "e : " << e << std::endl;
    std::cout << "f : " << f << std::endl; // 12

    std::cout << "g : " << g << std::endl;
    
    std::cout << std::endl;
    std::cout << "std::showpoint : " << std::endl;
    std::cout << std::showpoint; ///////////////////// Here we set showpoint. Force decimal to be showing 
    std::cout << "d : " << d << std::endl;
    std::cout << "e : " << e << std::endl;
    std::cout << "f : " << f << std::endl; // 12.0000

    std::cout << "g : " << g << " -------> **will not show zeros, because 'g' is an int " << std::endl; // Will not show zeros, because it's an int


    return 0;
}
