#include <iostream>

int main() {

   //////////// AUTO ///////////////////
   //COMPILER WILL TRY AND GUEST THE TYPE 
   
    
    auto var_1 {10};
    auto var_2 {14.0}; // DOUBLE
    auto var_3 {15.0f}; // FLOAT
    auto var_4 {16.0l}; // LONG DOUBLE
    auto var_5 {'e'}; //CHARACTER 

    std::cout << var_1 << std::endl;
    std::cout << var_2 << std::endl;
    std::cout << var_3 << std::endl;
    std::cout << var_4 << std::endl;
    std::cout << var_5 << std::endl;




    return 0;
}
