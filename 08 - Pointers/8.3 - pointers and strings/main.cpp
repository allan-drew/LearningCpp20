#include <iostream>

int main() {

    //////// POINTER AND STRINGS /////////////

    // Uma string é armazenada em um vetor (array) de caracteres 

// =============================================================================================================
    //If you DON'T want to allow modifications in your string, use this
    const char message [] {"Hello World!"};
    std::cout << "message : " << message << std::endl;

    const char * PointerToMessage = message;
    std::cout << " Dereference PointerToMessage (antes de apontar para a posicao 1) : " << * PointerToMessage << std::endl;


    PointerToMessage = &message[1]; // Fazendo o ponteiro apontar para o endereço de message na posição 1
    std::cout << " Dereference PointerToMessage (depois de apontar para a posicao 1) : " << * PointerToMessage << std::endl; //(depois de fazer o ponteiro receber o endereço na posição 1)

    // COMPILER ERROS => a expressão deve ser modificável : 
    //* PointerToMessage = 'B';  


// =============================================================================================================
    std::cout << "-------------------------------------------------------------------" << std::endl;
// =============================================================================================================


    //Allow users to modify the string. The way we can do this is to use ROW CHARACTER ARRAYS
    // In other words --> allow modify to message

    //If you WANT to allow modifications in your string, use this ( without const )
    char message1[] {"Hello World!"};
    std::cout << "message1 : " << message1 << std::endl;

    char * pointerToMessage_1 = message1;
    std::cout << " Dereference pointerToMessage_1 (antes de apontar para a posicao 1) : " << * pointerToMessage_1 << std::endl;
    std::cout << " pointerToMessage_1 (antes de apontar para a posicao 1) : " << pointerToMessage_1 << std::endl;

    std::cout << "\n";

    pointerToMessage_1 = &message1[1]; // Fazendo o ponteiro apontar para o endereço de message1 na posição 1
    std::cout << " Dereference pointerToMessage_1 (depois de apontar para a posicao 1) : " << * pointerToMessage_1 << std::endl; //(depois de fazer o ponteiro receber o endereço na posição 1)
    std::cout << " pointerToMessage_1 (depois de apontar para a posicao 1) : " << pointerToMessage_1 << std::endl;

    std::cout << "\n";

    // Após apontar para a posição 1 da string, podemos modificá-la, já que NÃO estamos mais usando const char 
    * pointerToMessage_1 = 'A';
    std::cout << " Dereference pointerToMessage_1 (apos modificar a posicao 1): " << * pointerToMessage_1 << std::endl; //(depois de fazer o ponteiro receber o endereço na posição 1 e MODIFICAR a letra de 'e' para 'A')

    std::cout << " pointerToMessage_1 (apos modificar a posicao 1) : " << pointerToMessage_1 << std::endl;


    std::cout << "\n";
    std::cout << "message1 : " << message1 << "     --> Changed 'e' to 'A' " << std::endl;



    return 0;
}
