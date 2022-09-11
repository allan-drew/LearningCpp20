#include <iostream>

///////////// ENUMERAÇÕES /////////////////////////////

// Uma enumeração consiste em um conjunto de CONSTANTES INTEIRAS em que cada uma é representada por um nome

// A enumeração fornece uma forma rápida de criar várias constantes (ex.: const int verde = 0; const int amarelo = 1; etc.....)

// Usada também quando conhecemos o conjunto de valores que uma variável pode assumir e desejamos usar nomes para esses valores dentro do programa


// =====================================================================================================
enum coresPossiveisDoCarro {
    verde,
    amarelo,
    azul,
    branco,
    preto
};
// A instruçãoo acima :
    // - Define coresPossiveisDoCarro como o nome de um novo tipo
    // - Faz dos nomes verde, amarelo, azul, branco e preto constante para os valores 0, 1, 2, 3 e 4
// =====================================================================================================


/////////////////// ENUMERAÇÕES COM ESCOPO /////////////////////////////////

// C++11 implementou uma nova forma de enumeração, que fornece ESCOPO aos enumeradores
// Isso porque as enumerações tradicionais têm alguns problemas como nomes conflitantes 
// enumeração com escopo ---> enum class 

enum class portamalas { 
    pequeno, medio, grande, gigante
}; 

enum class alturaDoCarro {
    pequena, media, grande 
};
// =====================================================================================================



int main() {

    coresPossiveisDoCarro lataria;
    lataria = azul;

    if ( lataria == azul ) {
        std::cout << " A lataria e azul! \n";
    } else {
        std::cout << " A lataria nao e azul! \n";
    }

    coresPossiveisDoCarro bancos;
    bancos = preto;

    if ( bancos == azul ) {
        std::cout << " A cor dos bancos e azul! \n";
    } else {
        std::cout << " A cor dos bancos nao e azul! \n";
    }

    std::cout << "-------------------------------------------- \n";
// =====================================================================================================

    portamalas hb20;
    hb20 = portamalas::medio; //Não podemos escrever apenas 'medio';
    // precisamos usar o escopo, ou seja, escreve de onde o 'medio' vem
    // que no caso vem de 'portamalas'

    alturaDoCarro onix;
    onix = alturaDoCarro::media;



    return 0;
}
