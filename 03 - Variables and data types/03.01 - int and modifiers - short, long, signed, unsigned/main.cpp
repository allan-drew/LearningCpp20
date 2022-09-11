#include <iostream>

int main() {
    
    std::cout << std::endl;
    std::cout << std::endl;

   //////////////////// INT MODIFIERS ////////////////////


   ////////////////////// SHORT and LONG MODIFIERS ///////////////////

   /////////////////////////////////////////////////////////////////////
   short test_short {-32768};
   std::cout << test_short << "  --> SIZE OF short : " << sizeof(short) << " BYTES " << std::endl;

   /// COMPILER ERROR. Pois a variação da 'short' só vai de -32768 até 32767
   //short test_short2 {-32769};

   short int test_shortint {32767};
   std::cout << test_shortint << "  --> SIZE OF short int : " << sizeof(short int) << " BYTES " << std::endl;
   
    std::cout << "          2 bytes = 16 bits --> 65 536 valores ( de -32 768  ate  32 767 ) " << std::endl;

    std::cout << std::endl;
    ////////////////////////////////////////////////////////////////////


    ////////////////////////////////////////////////////////////////////
   int test_int {55}; 
   std::cout << test_int << "  --> SIZE OF int : " << sizeof(int) << " BYTES " << std::endl;

   /// COMPILER ERROR. Pois a variação da 'int' só vai de -2 147 483 648 até 2 147 483 647
   // int test_int2 {2147483648};

   long test_long {-2147483648}; 
   std::cout << test_long << "  --> SIZE OF long : " << sizeof(long) << " BYTES " << std::endl;

   long int test_longint {2147483647}; 
   std::cout << test_longint << "  --> SIZE OF long int : " << sizeof(long int) << " BYTES " << std::endl;

   std::cout << "           4 bytes = 32 bits --> 4 294 672 296 valores ( de -2 147 483 648  ate  2 147 483 647 )" << std::endl;

    std::cout << std::endl;
    ///////////////////////////////////////////////////////////////////


    ////////////////////////////////////////////////////////////////////
   long long test_longlong {100};
   std::cout << test_longlong << "  --> SIZE OF long long : " << sizeof(long long) << " BYTES " << std::endl;

   long long int test_longlongint {100};
   std::cout << test_longlongint << "  --> SIZE OF long long int : " << sizeof(long long int) << " BYTES " << std::endl;
    
    std::cout << "          8 bytes = 64 bits " << std::endl;

    std::cout << std::endl;
    std::cout << "-------------------------------" << std::endl;
   std::cout << std::endl;
   //////////////////////////////////////////////////////////////////////////


//========================================================================================================

   ////////SIGNED and UNSIGNED MODIFIERS /////////////////////////////

   // Colocando o signed, tem-se o mesmo resultado 
   signed int value_3 {10};
   signed int value_4 {-350};
   std::cout << value_3 << std::endl;
   std::cout << value_4 << std::endl;

      std::cout << std::endl;


   // UNsigned: somente pode colocar valores positivos. Com isso, não se tem números negativos.
   unsigned short value_6 {65535};
   std::cout << value_6 << " --> SIZE OF unsigned short : " << sizeof(unsigned short) << " BYTES" << std::endl;
   
    std::cout << "          2 bytes = 16 bits --> 65 536 valores " << std::endl;
    std::cout << "          unsigned short representa numeros de 0 a 65 535, ou seja, sobra mais espaco para os positivos " << std::endl;


    std::cout << std::endl;
   unsigned int value_5 { 4294672295 };
   std::cout << value_5 << " --> SIZE OF unsigned int : " << sizeof(unsigned int) << " BYTES " << std::endl;
    std::cout << "          4 bytes = 32 bits --> 4 294 672 296 valores " << std::endl;
    std::cout << "          unsigned int representa numeros de 0 a 4 294 672 295, ou seja, sobra mais espaco para os positivos " << std::endl;


    //////// COMPILER ERROR (negative number)
   //unsigned int value_6 {-350}; 
   //std::cout << value_6 << std::endl;



    std::cout << std::endl;
    std::cout << std::endl;

    return 0;
}
