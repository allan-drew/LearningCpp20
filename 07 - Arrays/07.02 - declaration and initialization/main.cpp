#include <iostream>

int main() {

    ////////// DECLARING AND INITIALIZE AT THE SAME TIME /////////////////

    std::cout << " Declaring and initialize at the same time : " << std::endl; 

    double salaries[5] {12.7, 7.5, 13.2, 8.1, 9.3};

    for (size_t i{0}; i < 5; ++i) {
        std::cout << " salary [" << i << "] : R$ " << salaries[i] << "k " << std::endl;
    }


    //////// IF YOU DON'T INITIALIZE ALL THE ELEMENTS, THOSE YOU LEAVE OUT ARE INITIALIZED TO 0

    std::cout << std::endl;
    std::cout << " ----------------------------------------------- " << std::endl; 
    std::cout << " If you don't initialize all the elements, those you leave out are initialized to 0" << std::endl; 

    int profits [8] {22, 12, 15};

    for (size_t i{0}; i < 8; ++i) {
        std::cout << " profit in the year [" << i << "] : R$ " << profits[i] << "k " << std::endl;  
    }


    return 0;
}
