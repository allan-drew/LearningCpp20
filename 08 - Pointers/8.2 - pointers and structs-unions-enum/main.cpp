#include <iostream>
#include <cstring> // necessário para usar strcpy


struct jogador {
    char nome[20];
    float salario;
    unsigned gols;
};


int main() {

// =======================================================================================================
    jogador pele;

    strcpy (pele.nome, "PELE");
    pele.salario = 200000;
    pele.gols = 1000;


    // Um ponteiro também pode apontar para tipos criados pelo programador ( registros , uniões, enumerações )
    jogador * ptr = &pele;

    // Os campos de um registro são acessados com o operador ponto ( . )
    std::cout << " O nome e : " << pele.nome << std::endl;
    std::cout << " O salario e : " << pele.salario << std::endl;
    std::cout << " O numero de gols e : " << pele.gols << std::endl;

    std::cout << std::endl;

    // Os campos de um ponteiro para registro usam o operador seta ( -> )
    std::cout << " O nome e : " << ptr -> nome << std::endl;
    std::cout << " O salario e : " << ptr -> salario << std::endl;
    std::cout << " O numero de gols e : " << ptr -> gols << std::endl;

    std::cout << std::endl;
    std::cout <<  "====================================================================" << std::endl;
    std::cout << std::endl;

// =======================================================================================================

    jogador time[22]; 
    jogador * ptr_estrela = &time[0]; //A estrela do time estará na posição zero

    std::cout << " Digite o nome da estrela do time :   ";
    std::cin >> time[0].nome;

    std::cout << " Agora digite o nome de outro jogador do time :   ";
    std::cin >> time[1].nome;

    std::cout << "\n O jogador estrela do time e o..." << ptr_estrela -> nome << std::endl;


    return 0;
}
