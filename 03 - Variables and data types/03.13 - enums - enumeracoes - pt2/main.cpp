#include <iostream>

///////////// ENUMERAÇÕES /////////////////////////////

// Uma enumeração consiste em um conjunto de CONSTANTES INTEIRAS em que cada uma é representada por um nome

// A enumeração fornece uma forma rápida de criar várias constantes (ex.: const int verde = 0; const int amarelo = 1; etc.....)

// Usada também quando conhecemos o conjunto de valores que uma variável pode assumir e desejamos usar nomes para esses valores dentro do programa

enum mes { 
    Jan=1,
    Fev,
    Mar,
    Abr,
    Mai,
    Jun,
    Jul,
    Ago,
    Set,
    Out,
    Nov,
    Dez
};

// Implementado para ser possível que std::cin consiga ler um tipo definido pelo programador
std::istream& operator>> (std::istream& is , mes& m ) {
    int mesTemp;
    is >> mesTemp;
    m = (mes)mesTemp;
    return is;
}

// =====================================================================================================



// =====================================================================================================

int main() {

    mes inicioAnoLetivo , fimAnoLetivo; // cria variáveis do tipo mês

    inicioAnoLetivo = Mar;
    fimAnoLetivo = Nov;

    std::cout << " Digite o numero do mes atual : \n";
    int mesAtual;
    std::cin >> mesAtual;

    if ( mesAtual > 12 || mesAtual < 0 ) {
        std::cout << "mes invalido \n";
    } else { 

        if ( mesAtual >= inicioAnoLetivo && mesAtual <= fimAnoLetivo ) {
            std::cout << "Voce esta em periodo letivo \n";
        } else {
            std::cout << "Ferias! \n";
        }    
    }

    std::cout << "-------------------------------------------- \n";

// =====================================================================================================

    mes inicioCopa , fimCopa; // cria variáveis do tipo mês

    inicioCopa = Nov;
    fimCopa = Dez;

    std::cout << " Digite o numero do mes atual : \n";

    // As funções de entrada e saída (cin e cout) não sabem como ler ou mostrar um tipo definido pelo programador
    // A não ser que sejam ensinadas a fazer isso!!!!!!!!!
    mes mesAtual_2;
    std::cin >> mesAtual_2;


    if ( mesAtual_2 > 12 || mesAtual_2 < 0 ) {
        std::cout << "mes invalido \n";
    } else { 

        if ( mesAtual_2 >= inicioCopa && mesAtual_2 <= fimCopa ) {
            std::cout << "Voce esta no periodo da Copa do Mundo 2022 \n";
        } else {
            std::cout << "Voce NAO esta no periodo da Copa do Mundo 2022 \n";
        }    
    }



    return 0;
}
