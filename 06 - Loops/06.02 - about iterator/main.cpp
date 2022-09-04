#include <iostream>

int main() {

///////////////////////////// Iterator can live OUTSIDE the loop scope : //////////////

    
    size_t j {0}; /////// size_t ====> not a type, just a type alias for some "unsigned int" representation. 
    //Can only represent positive numbers.  

    int count {12}; /// It's a good thing to put the value how many times the loop is going to run IN A VARIABLE like this and NOT inside the for

    for ( j ; j < count; ++j ) {
        std::cout << j << " Using the 'j' variable " << std::endl;
    }

    std::cout << " Loop done. The value of j is : " << j << std::endl;///// Iterator can live OUTSIDE the loop scope
    std::cout << "=========================================================" << std::endl;


// ======================================================================================================
    /////////// Scope of the iterator. ///////

    for( size_t i{0} ; i < 5 ; ++i ) {
        std::cout << i << " : I love C++ // ";
    }
    std::cout << "Loop done!" << std::endl;
    ///// COMPILER ERROR : 
    //std::cout << "i : " << i << std::endl; 
        // "i" is not in scope. 
        // If we declare "i" inside the 'for' like in this example, 
        // then it will be only possible to use in scope  
    
    std::cout << std::endl;
// ======================================================================================================

    //////////// Leave out the iterator declaration part
    
    size_t i{0}; // Iterator defined outside

    for (  ; i < 15 ; ++i) { //  Iterator declaration part is "empty"
        std::cout << i << " : I love C++ // ";
    }
    std::cout << "Loop done!" << std::endl;
    std::cout << "i : " << i << std::endl;
    



    return 0;
}
