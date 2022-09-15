#include <iostream>

    //====================================================================== 
    // MEMORY LEAKS 
    // O new deve ser sempre balanceado com o uso de um delete
    // Caso contrário, tem-se um vazamento de memória



int main() {

    int * FirstPointer = new int; 
    * FirstPointer = 100;

    std::cout << " Value int : " << *FirstPointer <<  std::endl;
    std::cout << " Address : " << FirstPointer << std::endl;

    // delete esquecido (delete FirstPointer;)
    FirstPointer = new int; // memory leak (vazamento de memória)
                // Ao alocarmos um novo bloco de memória com o 'new int' e fazermos o FirstPointer apontar para esse novo bloco de memória, perderemos acesso ao bloco de memória antigo (o endereço não estará mais guardado no ponteiro FirstPointer), pois o ponteiro estará apontando para outro bloco de memória

    // A primeira memória alocada e não liberada continuará alocada até o programa ser encerrado.

    * FirstPointer = 69;
    std::cout << " Value int : " << *FirstPointer <<  std::endl;
    std::cout << " Address : " << FirstPointer << std::endl;
    delete FirstPointer; // Aqui, estaremos liberando a ÚLTIMA alocação de memória


// =======================================

    // Ao alocar memória e NÃO liberar, por diversas vezes, em determinado instante poderá faltar memória. Um crash poderá ocorrer 



    return 0;
}
