#include <iostream>

// C-strings _VERSUS_ String Objects

    // Basic strings (C-strings) are implemented as arrays of type char that are terminated with the null character 

    // The library called string, which is part of the "Standard Template Library" in C++, contains a class called string. Strings are declared as regular variables (not as arrays). 

        // Objetos da classe string se parecem bastante com registros
        // Podem ser usados como um tipo básico da linguagem

        // A string funciona como um registro comum, ou seja, também passa-se CÓPIAS 

#include <string>

// ==================================================================================


// Prototype (Declaration)
void printingCars ( const std::string vetorCars[], int n ); // criando um vetor de strings 


// ==================================================================================

int main() {

    std::string cars[3];

    std::cout << "type your 3 favorite Volkswagen cars : \n";
    for ( int i=0; i < 3; i++ )
    {
        std::cout << "=> ";
        std::getline ( std::cin, cars[i] );
    }


    std::cout << "\n Your favorites Volkswagen cars : \n ";
    printingCars (cars, 3);

    return 0;
}

// ==================================================================================

// Definition (implementation)
void printingCars ( const std::string vetorCars[], int n )
{
    for ( int i=0; i < n; i++ ) 
    {
        std::cout << vetorCars[i] << ", ";
    }
}

// ==================================================================================
