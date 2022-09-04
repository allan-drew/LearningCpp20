#include <iostream>

int main() {

///////////////// FOR LOOP ///////////////

    //loop body ==========> inside curly braces { }

    for ( unsigned int i{0} ; i < 10 ; ++i ) {
                // Iterator =====> unsigned int i{}
                // Starting point ===> i = 0 
                // Test (control when loop stops) ====> i < 10 
                // Increment (or decrement) ====> ++i 

        //loop body ==========> inside curly braces { }
        std::cout << i <<  " : I love C++ " << std::endl;
        /// "i" is valid to use within the boundaries of the {} here.
        // If you try to acess after }, then you'll get an error.  
   }
   
    std::cout << "      First Loop done!" << std::endl;

// =======================================================================================================

    std::cout << "=========================================================" << std::endl;


    for ( int i {0} ; i < 15 ; i = i + 2 ) {
        std::cout << i << " : I love music! " << std::endl;
    }
    std::cout << "      Second Loop done!" << std::endl;



    return 0;
}
