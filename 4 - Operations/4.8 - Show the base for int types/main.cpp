#include <iostream>

int main() {

    //showbase and noshowbase : show the base for integral types
    
   int pos_int;
   pos_int = 3152;

   std::cout << "------------------" << std::endl;
   std::cout << "pos_int (noshowbase : DEFAULT) : " << std::endl;
   std::cout << "       pos_int(dec) : " << std::dec << pos_int << std::endl;
   std::cout << "       pos_int(hex) : " << std::hex << pos_int << std::endl;
   std::cout << "       pos_int(oct) : " << std::oct << pos_int << std::endl;
   
   std::cout << "------------------" << std::endl;

   std::cout << "pos_int (std::showbase) : " << std::endl;
   std::cout << std::showbase; ///// Here we set the showbase

   std::cout << "       pos_int(dec) : " << std::dec << pos_int << std::endl;
   std::cout << "       pos_int(hex) : " << std::hex << pos_int << std::endl;
   std::cout << "       pos_int(oct) : " << std::oct << pos_int << std::endl;


    return 0;
}
