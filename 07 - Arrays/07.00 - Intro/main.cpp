#include <iostream>

int main() {

// arrays are a facility in C++ to group many variables together and manipulate them as a single unit.

    ///////////////// DECLARING AND USING ARRAYS ////////////// 

    std::cout << std::endl;

    int scores [ 10 ]; /// This will initialize with "junk data" / "garbage". Storing 10 integers. 

    std::cout << " ------ Reading scores (manually) ------ " << std::endl;

    std::cout << " scores " << scores[0] << " ======>  printing out the [ 0 ] element " << std::endl;
    std::cout << " scores " << scores[1] << " ======>  printing out the [ 1 ] element " << std::endl;
    std::cout << " scores " << scores[7] << " ======>  printing out the [ 2 ] element " << std::endl;

    std::cout << std::endl;
    

    /////////////// READING WITH A LOOP //////////////// 
    std::cout << " ------ Reading scores (with loop) ------ " << std::endl;
    
    for ( size_t i{0}; i < 10; ++i) {
        std::cout << " scores [ "  << i << " ] --> " << scores[i] << std::endl;
    }




    return 0;
}
