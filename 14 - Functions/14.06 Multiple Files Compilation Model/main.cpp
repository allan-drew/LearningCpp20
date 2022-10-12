#include <iostream>

#include "compare.h" ///Contain max and min functions declarations
#include "operations.h" ///Contain incr_mult function declaration 
/// Notice that the way we include our own headers is different 
// from the way we include the libraries or headers that come with the C++ standand library
//  < > (angle brackets)  vs  " "(quotes) // 


int main() {

    std::cout << std::endl;

    int maximum = max (34 , 56 );
    std::cout << " maximum number : " << maximum << std::endl;

    int minimum = min (34 , 56 );
    std::cout << " minimum number : " << minimum << std::endl;

    std::cout << std::endl;
    std::cout << std::endl;


    int x {2};
    int y {5};
    int increment_mult = incr_mult ( x , y );
    std::cout << " Incr Mult : " << increment_mult << std::endl; 

    std::cout << std::endl;


    return 0;
}





