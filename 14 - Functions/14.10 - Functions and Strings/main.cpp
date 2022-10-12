#include <iostream>


// Uma string é armazenada em um vetor (array) de caracteres
            // char peixe [] = "Sardinha"; // deixa o compilador contar
// O último caractere de toda string é o caractere nulo \0 ( é o caractere de código ASCII 0 )

// O estudo de funções com vetores se aplica às Strings


int numberOfCharsInString ( char ch, const char str[] ) {

    int cont = 0;

    for ( int i = 0; str[i]; i++) {  // encerra quando str[i] é '\0'

        if ( str[i] == ch ){
            cont++;
        }

    }

    return cont;

}



int main() {

    char computer [] = "Apple"; // string em vetor
    const char * smartphone = "SAMSUNG";    //  smartphone aponta para string

    int numberOf_p = numberOfCharsInString ('p', computer);
    int numberOf_S = numberOfCharsInString ('S', smartphone);
    int numberOf_A = numberOfCharsInString ('A', smartphone);

    std::cout << numberOf_p << " characteres p in " << computer << "\n";
    std::cout << numberOf_S << " characteres S in " << smartphone << "\n";
    std::cout << numberOf_A << " characteres A in " << smartphone << "\n";

    return 0;
}
