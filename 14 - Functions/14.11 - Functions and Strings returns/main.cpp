#include <iostream>
#include <cstring> 


// Funções não retornam Strings
    // Elas podem retornar o ENDEREÇO de Strings

    // Porém, o retorno de endereço de strings pode ser perigoso
        // Exemplo: char * InverteString ( const char * str );
    // Uma função não deve retornar o endereço de variáveis ou constantes string criadas dentro da própria função
    // Isso porque as constantes e variáveis criadas dentro de uma função DEIXAM DE EXISTIR quando a função acaba
    // Ou seja, a memória para constantes e variáveis locais é liberada ao final da execução da função

// ============================== 
// A melhor forma de retornar uma String corretamente é passando um parâmetro adicional para ser modificado
// No caso abaixo, o parâmetro adicional é o 'char * invertedString'
// Ao invés de retornar com a função, faz-se a modificação neste parâmetro adicional


void InvertString ( const char * stringName, char * invertedString ) {

    const int Size = std::strlen(stringName);

    for ( int i = 0; i < Size; ++i ) {

        invertedString[i] = stringName[Size - 1 - i]; // Implementa a inversão 

    }

    invertedString [Size] = '\0';

}


int main() {

    char name[40];
    char invertedName[40];

    std::cout << "NAME : " << "\n";
    std::cin >> name;

    std::cout << "---------------" << "\n";

    InvertString (name, invertedName);
    std::cout << "INVERTED NAME : " << "\n";
    std::cout << invertedName << "\n";



    return 0;
}
