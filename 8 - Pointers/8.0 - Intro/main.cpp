#include <iostream>

/////////////////// POINTERS /////////////////////////
    ///// A pointer is a special type of variable in C++ that is going to store addresses to other variables.
    ///// Um ponteiro é uma variável capaz de armazenar um endereço de memória ou o endereço de outra variável.
    
    // Pq usar ponteiros ?

    // Em C++, a passagem de argumentos é feita por cópia. 
    // Copiar uma grande quantidade de dados não é eficiente.
    // A solução, portanto, é usar um ponteiro

    // Além disso, o tempo de vida de uma variável está atrelado ao seu escopo
    // Como alocar memória que continua viva após a execução de uma função ? 
    // A solução é usar pointeiros com alocação dinâmica de memória


int main() {

    std::cout << std::endl;

    //////// Initializing pointers and assigning them data 
    int int_data {56};
    int* ptr_1 {nullptr};
    ptr_1 = &int_data; // Allocation the address of int_data in the pointer ptr_1

    std::cout << " int_data : " << int_data << std::endl;

    // Operador de endereço / address-of operator ( & ) --> obtém a localização de memória de determinada variável
    // The address of a variable can be obtained by preceding the name of a variable with an ampersand sign (&), known as address-of operator.
    std::cout << " Address of int_data : " << &int_data << " // Variables have their address " << std::endl;


    std::cout << std::endl;

    std::cout << " Address of ptr_1 : " << &ptr_1 << " // Pointers have their own address, just like variables " << std::endl;
    std::cout << " Address stored in ptr_1 : " << ptr_1 << " // It's the int_data address " << std::endl;
    std::cout << " Dereferencing ptr_1 --> value : " << *ptr_1 << " // Dereferencing = act of reading something through a pointer " << std::endl; 
    // If we have an address in a pointer, we can go through that address and actually read the value contained in that address. 

    std::cout << std::endl;

    return 0;
}

