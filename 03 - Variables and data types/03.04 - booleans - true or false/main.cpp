#include <iostream>

int main() {

///////////////// BOOLEANS - TRUE OR FALSE ////////////////////////
   
   bool redlight {false};
   bool greenlight {true};

   if ( redlight == true ) {
       std::cout << "STOP!" << std::endl;
   } else {
       std::cout << "GO THROUGH! Go ahead!" << std::endl;
   }


   ///PRINTING OUT A BOOL (1 OR 0)
   std::cout << "REDLIGHT IS : " << redlight << std::endl;


   ///PRINTING OUT TRUE OR FALSE 
   // FORCES THE OUTPUT FORMAT TO TRUE/FALSE  
   std::cout << std::boolalpha;
   std::cout << "REDLIGHT IS : " << redlight << std::endl;

   if (greenlight) { ///// = IF GREENLIGHT IS TRUE
       std::cout << "THE LIGHT IS GREEN!" << std::endl;
   } else {
       std::cout << "THE LIGHT IS NOT GREEN!" << std::endl;
   }




    return 0;
}
