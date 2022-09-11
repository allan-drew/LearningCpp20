#include <iostream>

int main() {

////////////// ARRAYS (VETORES) ///////////////////////////////////////

// How to store a set of information?
// How to store the grades of 30 students? Creating 30 different variables is NOT the best solution

// An array in C or C++ is a collection of items
// They are used to store SIMILAR TYPES of elements 
// as in the data type must be the same for all elements.

//Arrays are used to store multiple values in a single variable, 
// instead of declaring separate variables for each value.


// int similar types
int myNum [3] = { 10 , 34 , 55 }; 
std::cout << " myNum[0] ----> " << myNum[0] << std::endl;

std::cout << "------------------------------------------------------------------------------" << std::endl;


// float similar types
float studentGrades [ 5 ] = { 0.4 , 3.2 , 9.8 , 4.9 , 5.0 };

for ( int i = 0 ; i < 5 ; i++ ) {
    std::cout << "Student " << i << " ==> " << studentGrades[i] << std::endl;
}


std::cout << "------------------------------------------------------------------------------" << std::endl;


// unsigned int similar type

// array to store number of visits to website in seven days
unsigned int visitsToWebsite [ 8 ] = { 0 , 45 , 32 };

for ( int i = 0 ; i < 8 ; i++ ) {
    std::cout << "Day " << i << " ==> " << visitsToWebsite[i] << std::endl;
}
// Ao inicializar parcialmente um vetor, os demais elementos recebem o valor zero

std::cout << "------------------------------------------------------------------------------" << std::endl;



// ==================================================================================================================

/////////////////// STRING /////////////////////////

    // C++ string class internally uses CHARACTER ARRAY to store character 
    // but all memory management, allocation, and null termination are handled by string class itself 
    // that is why it is easy to use.

    // Uma string é uma sequencia de caracteres finalizada pelo caractere nulo '\0'
    // Uma string é armazenada em um vetor (array) de caracteres 
    // O último caractere de toda string é o caractere nulo \0 ( é o caractere de código ASCII 0 )

    // É vetor de caracter, e é também uma string : 
    char msg3 [] {'H','e','l','l','o','\0'};
    std::cout << "msg3 : " << msg3 << std::endl;

    // É vetor de caracter, mas não é uma string : 
    char msg2 [5] {'H', 'e', 'l', 'l', 'o'}; 
    std::cout << "msg2 : " << msg2 << std::endl; // Tem risco de imprimir lixo após Hello


    std::cout << "------------------------------------------------------------------------------" << std::endl;


    // A inicialização de uma string pode ser simplificada usando uma constante string
    char penas[10] = "Gaivota"; // caractere \0 está implítico
    std::cout << penas << std::endl;

    char peixe [] = "Sardinha"; // deixa o compilador contar
    std::cout << peixe << std::endl;
    std::cout << peixe[7] << " ---> Imprimindo a na posicao 7 " << std::endl;
    std::cout << peixe[8] << " ---> Imprimindo |0 (vazio) na posicao 8 " << std::endl;
    std::cout << peixe[9] << " ---> Imprimindo lixo na posicao 9  " << std::endl;


    char dica[80] = "Estude C++";
    std::cout << dica << std::endl;

    std::cout << "------------------------------------------------------------------------------" << std::endl;


    std::cout << std::endl;

    return 0;
}
