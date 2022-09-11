#include <iostream>

///////////////////////// UNIONS /////////////////////////////////////////// 

// Unions: A union is a type of structure that can be used where the amount of memory used is a key factor.

// This is most useful when the type of data being passed through functions is unknown
// using a union which contains all possible data types can remedy this problem.

// Assim como um registro, a união pode armazenar diferentes tipos de dados
// PORÉM, a união é usada quando um item pode usar dois ou mais formatos, mas nunca ao mesmo tempo


// Registros x União 
// A união só armazena UM DOS MEMBROS POR VEZ
// Os membros compartilham a mesma posição de memória ( O tamanho do bloco é igual ao do maior membro )
// A união é usada para economizar memória
// A união é um tipo de estrutura que pode ser usada onde a quantidade de memória utilizada é um fator chave.

    // O registro armazena um char, um int e um double
    // A união armazena um char OU um int OU um double

// =================================================================================================== 
union identifier {

    char variableChar;
    int variableInt;
    double variableDouble;

};
// =================================================================================================== 


union regkey {
    int key; // key with integers
    char code[10]; //code with 10 characters
}; 

struct  software
{
    char softwareName [ 30 ];
    float price;
    regkey serial;
    bool isRegKeyInt;
    bool isRegKeyChar;
};


// =================================================================================================== 

int main() {

    identifier id_1;

    id_1.variableChar = 'g';   // char
    std::cout << id_1.variableChar << std::endl;

    id_1.variableDouble = 4512543.612;   // double
    std::cout << id_1.variableDouble << std::endl;

    std::cout << id_1.variableChar << " ----> Imprimindo lixo, pois a memoria foi sobrescrita para representar o double" << std::endl; // LIXO

    std::cout << std::endl;
    std::cout << "=========================================================" << std::endl;


// =================================================================================================== 

    software firstSoftware;

    std::cout << " === Digite o tipo de chave de ativacao === \n\n";
    std::cout << "      Digite 1 para chave com inteiros \n";
    std::cout << "      Digite 2 para chave com codigo de caracteres \n";

    int type;
    std::cin >> type;

    if ( type == 1 ) {
        firstSoftware.isRegKeyInt = true;
    } else { 
        firstSoftware.isRegKeyInt = false;
    }

    if ( type == 2 ) {
        firstSoftware.isRegKeyChar = true;
    } else { 
        firstSoftware.isRegKeyChar = false;
    }

    std::cout << std::endl;
    std::cout << std::boolalpha; // bool as true and false (instead of 1 and 0 )
    std::cout << " A chave e um conjunto de inteiros ? " << firstSoftware.isRegKeyInt << std::endl;
    std::cout << " A chave e um codigo de caracteres ? " << firstSoftware.isRegKeyChar << std::endl;
    std::cout << std::endl;


    regkey password;
    
    if ( type == 1 ) {
        std::cout << " Digite a chave com inteiros: \n";
        std::cin >> password.key;
        std::cout << "      Sua chave e : " << password.key << std::endl;

    } else { 
        std::cout << " Digite a chave com caracteres: \n";
        std::cin >> password.code;
        std::cout << "      Sua chave e : " << password.code << std::endl;

    }

    

    return 0;
}
