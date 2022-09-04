#include <iostream>

int main() {

   ///////////// WHILE LOOP ///////////////////////

   const size_t COUNT{ 14 }; //// It's recommended to use uppercase when declaring a constant. 
   //It's a convention and make easy to read.  
   
   size_t i{0}; ///// Iterator declaration 

    while (i < COUNT)
    {
        std::cout << i << " We love music // ";
        ++i;
    }

    std::cout << " LOOP DONE! " << std::endl; 
    std::cout << " ------------------------- " << std::endl; 

// =========================================================================================================

    //////////// DO WHILE LOOP /////////////////// 

    const int COUNT_2 { 9 };
    size_t j {0}; /// Iterator declaration 

    do {
        std::cout << j << " : Love C++ // ";
        ++j; // Incrementation

    } while ( j < COUNT_2 ); 
    std::cout << " Loop done! " << std::endl; 
    std::cout << " ------------------------- " << std::endl; 


// ============================================================================================================

    //  !!!!!!!!!!!! // 
    // The DO WHILE LOOP runs BEFORE it does the test. This may cause crazy things happening if not careful.
    // FOR EXAMPLE (putting 0 in COUNT), the code will NOT just say "loop music done!". The code will print " 0 : Love music! " with zero value, because the Do While loop runs before the test. 
    // Why is this  a problem ? Because probably this is not what you intended putting " 0 " in "COUNT_3". 
    // So, be careful

    const int COUNT_3 {0}; 
    size_t k {0};

    do {
        std::cout << k << " : Love music!  " << std::endl;
        ++k; // Incrementation

    } while ( k < COUNT_3 ); 
    std::cout << " Loop music done! " << std::endl; 
    std::cout << " ------------------------- " << std::endl; 
    



    return 0;
}
