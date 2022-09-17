#include <iostream>

struct jogador
{
    char nome [30];
    float salario;
    unsigned gols;
};


int main() {


    // VETORES DINAMICOS DE REGISTROS


    // Com o operador 'new' é possível criar um vetor dinâmico;
    // O operador 'new' também pode ser usado para criar vetores dinâmicos de registros

    // Seu tamanho pode ser definido a qualquer momento (o tamanho pode ser lido do usuário)

                        // O tamanho de um vetor dinâmico pode ser uma variável, 
                        // com valor fornecido durante a execução do programa

                        // Com isso, temos a vantagem da alocação dinâmica de memória aplicada a vetores dinamicos de registros 

    std::cout << "Digite o numero de jogadores do seu time  ";
    int numberOfPlayers;
    std::cin >> numberOfPlayers;

    jogador * pointerTime = new jogador[numberOfPlayers]; // criando um bloco de memória para guardar X jogadores com o 'new jogador[numberOfPlayers]', e fazendo o ponteiro 'pointerTime' apontar para o primeiro dos jogadores

    std::cout << "digite o nome do primeiro jogador     ";
    std::cin >> pointerTime[0].nome;

    std::cout << "digite o nome do segundo jogador      ";
    std::cin >> pointerTime[1].nome;

    std::cout << "digite o nome do ultimo jogador      ";
    std::cin >> pointerTime[numberOfPlayers-1].nome;


    // O operador ( . ) deve ser usado com registros
    std::cout << " ( . )  O nome do primeiro jogador e  " << pointerTime[0].nome <<std::endl;
    std::cout << " ( . )  O nome do segundo jogador e  " << pointerTime[1].nome <<std::endl;
    std::cout << " ( . )  O nome do ultimo jogador e  " << pointerTime[numberOfPlayers-1].nome <<std::endl;

    std::cout << std::endl;

    // O operador ( -> ) deve ser usador com ponteiros/endereços
    // Os ponteiros contem um endereço de um jogador. Para acessar, é necessário usar ->  
    std::cout << " ( -> )  O nome do primeiro jogador e  " << pointerTime->nome <<std::endl;
    std::cout << " ( -> )  O nome do segundo jogador e  " << (pointerTime+1)->nome <<std::endl;
    std::cout << " ( -> )  O nome do ultimo jogador e  " << (pointerTime+(numberOfPlayers-1))->nome <<std::endl;

    // O delete de vetores dinamicos deve usar colchetes []
    delete [] pointerTime;

    return 0;
}


