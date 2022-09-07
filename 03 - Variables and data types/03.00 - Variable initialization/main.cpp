#include <iostream>

int main() {

    ////////////////// VARIABLE INITIALIZATION /////////////////////////////
    
   /// VARIABLE MAY CONTAIN RANDOM GARBAGE VALUE. [WARNING]
   int dog_count; 
   std::cout << "NUMBER OF DOGS is : " << dog_count << std::endl;   


   //////////// VARIABLE BRACED INITIALIZATION ///////////////////
   /// INICIALIZAÇÃO DE VARIÁVEIS COM CHAVES //////

   int number1 {}; //INITIALIZES TO ZERO
   std::cout << "number 1 is : " << number1 << std::endl;

   int number2 {10}; //INITIALIZES TO 10
   std::cout << "number 2 is : " << number2 << std::endl;   

   int number3 { number1 + number2 }; // YOU CAN USE EXPRESSION AS INITIALIZER:  
   std::cout << "number 3 is : " << number3 << std::endl;      

    std::cout << std::endl;
// =========================================================================================================================

   //////////// FUNCTION VARIABLE INITIALIZATION  ////////////////////
   int apple_count (5);
   int orange_count (10); 
   std::cout << " APPLES : " << apple_count << std::endl; 
   std::cout << " ORANGES : " << orange_count << std::endl; 
   std::cout << " NUMBER OF fruits : " << apple_count + orange_count << std::endl;

    std::cout << std::endl;
// =========================================================================================================================



   ///////////// ASSIGNMENT VARIABLE INITIALIZATION ////////////////
   int bike_count = 2;
   int truck_count = 7;
   int vehicle_count = bike_count + truck_count;
   std::cout << " BIKES : " << bike_count << std::endl; 
   std::cout << " TRUCKS : " << truck_count << std::endl; 
   std::cout << " NUMBER OF VEHICLES : " << vehicle_count << std::endl;
   
    std::cout << std::endl;
// =========================================================================================================================




    return 0;
}
