#include <iostream>

/////////////////// POINTERS /////////////////////////
    ///// A pointer is a special type of variable in C++ that is going to store addresses to other variables.
    ///// Um ponteiro é uma variável capaz de armazenar um endereço de memória ou o endereço de outra variável.

int main() {

    //////// Initializing pointers and assigning them data 
    int int_data {56};
    int* p_int2 {nullptr};
    p_int2 = &int_data; // Allocation the address of int_data in the pointer p_int2

    std::cout << " Int data : " << int_data << std::endl;

    std::cout << " Address of int_data : " << &int_data << " // Variables have their address " << std::endl;
    std::cout << " Adderss of p_int2 : " << &p_int2 << " // Pointers have their own address, just like variables " << std::endl;

    std::cout << " p_int2 (Address) : " << p_int2 << " // address stored in pointer " << std::endl;
    std::cout << " value : " << *p_int2 << " // (Dereferencing a pointer) / (Dereferencing = act of reading something through a pointer) " << std::endl; // Dereferencing a pointer
    /////// Dereferencing a pointer (Dereferencing = act of reading something through a pointer): 
    // If we have an address in a pointer, we can go through that address and actually read the value contained in that address. 

    return 0;
}

