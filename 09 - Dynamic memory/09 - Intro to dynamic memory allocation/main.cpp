#include <iostream>

    // DYNAMIC MEMORY 

    // O verdadeiro poder dos ponteiros está em apontar para memória não rotulada, alocada durante a execução do programa

    //In the programs seen in previous chapters, all memory needs were determined before program execution by defining the variables needed. 
    // But there may be cases where the memory needs of a program can only be determined during runtime. 
    // For example, when the memory needed depends on user input. 
    //On these cases, programs need to dynamically allocate memory, for which the C++ language integrates the operators new and delete.

    // Existem duas formas de alocar memória : 
        
        // 1) Alocação automática, através de declaração de variáveis ( ex.: int total = 6; )

        // 2) Alocação dinâmica
                // aloca uma memória aleatória (um endereço aleatório) com o operador new
                // guarda o endereço da memória em um ponteiro (o ponteiro possui seu próprio endereço)
                // usa o ponteiro para acessar e modificar os dados
                // libera memória com o operador delete


int main() {

    int * FirstPointer = new int;
        // No lado direito da atribuição, ao escrever 'new' e passar o algum tipo ( ex.: int ), o sistema vai alocar, aleatoriamente, uma quantidade de memória 
        // A quantidade depende do tipo passado (no caso do int, o sistema vai alocar 4 bytes)
        // O ponteiro será a única forma de acessar essa memória alocada. Por isso, do lado esquerdo da atribuição, cria-se um ponteiro

                // Note that the asterisk used when declaring a pointer only means that it is a pointer (it is part of its type compound specifier), 
                // and should not be confused with the dereference operator (indirection operator), but which is also written with an asterisk. 
                // They are simply two different things represented with the same sign.

    // the dereference operator (indirection operation) may also appear on the left side of the assignment operator, making it possible to change the value
    // Podemos acessar a posição na memória que foi apontada pelo ponteiro, e podemos guardar algum valor dentro daquela posição de memória. 
    * FirstPointer = 100;

    std::cout << " Value int : " << *FirstPointer <<  std::endl;
    std::cout << " Address : " << FirstPointer << std::endl;

    // Assumindo um sistema operacional de 64 bits, o endereço possui 8bytes, por isso o ponteiro terá 8 bytes
    std::cout << " Tamanho do ponteiro : " << sizeof(FirstPointer) << "bytes " << std::endl;

    // O elemento apontado, int, possui 4bytes
    std::cout << " Tamanho do elemento apontado (int) : " << sizeof(*FirstPointer) << "bytes " << std::endl;


    std::cout << std::endl;

    // ----------------------------------------------------------------
    double * SecondPointer = new double;
    * SecondPointer = 45.7;
    std::cout << " Value double : " << *SecondPointer << std::endl;
    std::cout << " Address : " << SecondPointer << std::endl;

    // Assumindo um sistema operacional de 64 bits, o endereço possui 8bytes, por isso o ponteiro terá 8 bytes
    std::cout << " Tamanho do ponteiro : " << sizeof(SecondPointer) << "bytes " <<  std::endl;

    // O tamanho do elemento apontado, double, é 8bytes
    std::cout << " Tamanho do elemento apontado (double) : " << sizeof(*SecondPointer) << "bytes " <<  std::endl;


    // Deve-se liberar a memória com delete
    // Toda memória alocada deve ser liberada ao final do uso
    // O delete libera a memória, MAS NÃO DESTRÓI O PONTEIRO
    delete FirstPointer;
    delete SecondPointer;

    std::cout << "===================================================" << std::endl;

// ================================================================================================================

    // Alocando memória novamente 
    FirstPointer = new int; // Aqui, estamos alocando um outro bloco de memória e colocando o endereço desse novo bloco de memória no ponteiro FirstPointer. Portanto, o FirstPointer estará agora apontando para o novo endereço de memória alocado
    * FirstPointer = 50;
    std::cout << " Value int : " << *FirstPointer <<  std::endl;
    std::cout << " Address : " << FirstPointer << std::endl;
    delete FirstPointer;

    std::cout << std::endl;

    // ----------------------------------------------------------------

    // Alocando memória novamente 
    SecondPointer = new double;
    * SecondPointer = 500.4567;
    std::cout << " Value double : " << *SecondPointer << std::endl;
    std::cout << " Address : " << SecondPointer << std::endl;
    delete SecondPointer;
// ========================================================================================================

    // ***************** ATENÇÃO!!!!! ************************* 
    // Ao usar o delete, libera-se a memória, e o sistema pode utilizar essa memória alocada aleatoriamente anteriormente para outra coisa
    // Porém, o ponteiro continua contendo o endereço da memória. Continua apontando para aquela memória aleatória (que agora é do sistema e não mais minha)

    // Se o bloco de memória ainda estiver reservado para meu programa, continua sendo possível exibir o mesmo valor, mesmo que se tenha liberado a memória para o sistema operacional
    // Ou seja, dependendo do sistema, ele ainda mantém aquele bloco de memória disponível para meu programa por um tempo. Por isso ainda é possível exibir o mesmo valor
    std::cout << " Value double : " << *SecondPointer << std::endl;
    std::cout << " Address : " << SecondPointer << std::endl;

    //When we return the memory to the O.S, it's good practice to reset that memory to nullptr
    FirstPointer = nullptr;
    SecondPointer = nullptr; 


// =========================================================================== 
    // O new deve ser sempre balanceado com o uso de um delete
    // Caso contrário, tem-se um vazamento de memória


    return 0;
}
