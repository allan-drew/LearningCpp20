#include <iostream>

int main() {

    //////////////////// SIZEOF AN ARRAY //////////////////////
    /// Getting data from a colection like an array (before and since C++17): 

    ///////// BEFORE C++17 

    // Before C++ 17, we had to get the size of the entire array and divide by size of each element in the array. To make this, we could use sizeof 

    std::cout << " =============================================== " << std::endl;

    int scores [] {1,2,5,7,9,10,5,67};
    std::cout << "sizeof(scores) : " << sizeof(scores) << std::endl;
    std::cout << "sizeof(scores[0]) : " << sizeof(scores[0]) << std::endl;

    int count {sizeof(scores)/sizeof(scores[0])};
    std::cout << "count : " << count << std::endl;

    /*
    for (size_t i{0} ; i < count ; ++i ) {
        std::cout << " scores [" << i << "] : " << scores[i] << std::endl;
    }
    */

    std::cout << std::endl;
    std::cout << " =============================================== " << std::endl;


    ///////// SINCE C++17 

    int points [] {1,2,5,7,9,10,5,67};
    int count_2 { std::size( points ) }; ///////     std::size was introduced in C++17
    std::cout << "count : " << count_2 << std::endl;

    /*
    for (size_t i{0} ; i < count_2 ; ++i ) {
        std::cout << " points [" << i << "] : " << points[i] << std::endl;
    }
    */

   
    std::cout << std::endl;
    std::cout << " =============================================== " << std::endl;


   //// Try to use RANGE BASED FOR LOOP to get data from an array, 
   //if you don't need the indexes, because make easier and cleaner 

        // Range based for loop : Executes a for loop over a range.
        // Used as a more readable equivalent to the traditional for loop 
        // operating over a range of values, such as all elements in a container.

    int goals [] {1,2,5,7,9,10,5,67};

    for ( auto i : goals ) { // range based for loop
        std::cout << " value [ ? ] : " << i << std::endl;        
    }
    std::cout << "we have lost the indexes information using range based for loop"; 

        /// If you just need the values in the array, range based for loop is really cool 

    std::cout << std::endl;
    std::cout << " If you just need the values in the array, range based for loop is really cool" << std::endl;
    std::cout << std::endl;

    ////// If you really need the indexes you will need some 'for' to get



    return 0;
}
