#include <iostream>

int main() {

   ///////////// WHILE LOOP ///////////////////////

   const size_t COUNT{ 14 }; //// It's recommended to use uppercase when declaring a constant. 
   //It's a convention and make easy to read.  
   
   size_t i{0}; ///// Iterator declaration 

    while (i < COUNT)
    {
        std::cout << i << " We love music // \n";
        ++i;
    }

    std::cout << " LOOP DONE! " << std::endl; 
    std::cout << " ------------------------- " << std::endl; 

// =========================================================================================================

    return 0;
}
