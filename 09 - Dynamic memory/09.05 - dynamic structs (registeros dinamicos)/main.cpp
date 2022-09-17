#include <iostream>


struct jogador 
{
    char nome [30];
    float salario;
    unsigned gols;
};


int main() {

    jogador j_1;
    std::cout << " digite o nome do jogador: "; std::cin >> j_1.nome;
    std::cout << " digite o salario do jogador: "; std::cin >> j_1.salario;
    std::cout << " digite o numero de gols do jogador: "; std::cin >> j_1.gols;

    std::cout << " O nome do jogador e " << j_1.nome << std::endl;
    std::cout << " O salario do jogador e " << j_1.salario << std::endl;
    std::cout << " O numero de gols do jogador e " << j_1.gols << std::endl;


    std::cout << " --------------------------------------------------------------------------------- \n\n";

// ============================================================================== 

    // DYNAMIC STRUCTS 

    // O primeiro uso importante de memória alocada dinamicamente é com vetores dinamicos (dynamic arrays).
    // Outro uso importante da memória dinâmica é alocar registros de forma dinâmica (dynamic structs)


    jogador * pointerJogador = new jogador; // alocando memória para guardar um jogador com o 'new jogador', e apontando para aquela memória com o 'pointerJogador'

    // Para acessar : 
        // Utiliza-se ( . ) com registros
        // Utiliza-se ( -> ) com ponteiros para registros

    std::cout << " digite o nome, salario e gols do jogador: "; 
    std::cin >> pointerJogador->nome >> pointerJogador->salario >> pointerJogador->gols;


    std::cout << " O nome do jogador e " << pointerJogador->nome<< std::endl;
    std::cout << " O salario do jogador e " << pointerJogador->salario << std::endl;
    std::cout << " O numero de gols do jogador e " << pointerJogador->gols << std::endl;

    delete pointerJogador;


    return 0;
}
