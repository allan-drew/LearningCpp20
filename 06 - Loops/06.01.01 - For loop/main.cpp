#include <iostream>

int main() {

    int x;

    std::cout << " Please, I want a positive number \n";

    for ( std::cin >> x; x < 0; std::cin >> x ) 
    {
       std::cout << "nop! I want a positive number, please! \n";
    };


    return 0;
}
