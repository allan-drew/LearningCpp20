#include <iostream>

int main() {

// ===========================================================================================================

    // POR QUE UTILIZAR memória alocada dinamicamente ? Sendo que com declaração de variável é mais fácil?!?!

    int total; //declaração da variável
    total = 30; // atribuição de valor 
    std::cout << "total : " << total << std::endl; // exibição do valor

    int * p = new int; // aloca uma memória aleatória e faz um ponteiro apontar para ela
    *p = 30; // atribuição de valor
    std::cout << "o valor e : " << *p << std::endl; // exibição do valor
    delete p; // libera memória

    // O propósito da alocação dinâmica não é substituir a alocação automática através de declarações de variáveis
    // Na realidade, não vale a pena alocar dinamicamente para dados de tipos básicos, como os dados acima!

    // Vale a pena usar alocação dinâmioca para outros tipos de estruturas, como por exemplo, vetores dinâmicos (dynamic arrays)

    std::cout << " ========================================== \n";
// ===========================================================================================================



    //////////// STATIC ARRAYS vs DYNAMIC ARRAYS /////////////////////

// ---------------------------------------------------------------------
    ////// STATIC ARRAY : 

    // O vetor tradicional é chamado de vetor estático;
    // É preciso definir o tamanho do vetor na declaração (o tamanho precisa ser uma constante inteira)

    int scores[10] { 3, 65, 7, 8, 9, 98 }; ////////// Lives on the stack

    //Can use 'std::size'
    std::cout << "scores size : " << std::size(scores) << std::endl;

    // Can use range-based for loop
    for( auto s : scores){
       std::cout << "value : " << s << std::endl;
    }


    std::cout << " ------------------------------------- \n";


// ---------------------------------------------------------------------
    ///// DYNAMIC ARRAY 

    // Com o operador 'new' é possível criar um vetor dinâmico;
    // Seu tamanho pode ser definido a qualquer momento (o tamanho pode ser lido do usuário)
    // Um vetor dinâmico é criado a partir de um ponteiro. O ponteiro tbm terá o nome do vetor dinâmico

    int * ptr_scores = new int[10] { 1,2,3,4,5,6,7,8,9,10 }; ///////// Lives on the heap.    
            // O ponteiro recebe o endereço do primeiro elemento do vetor

    // Cannot use 'size'
    //std::cout << "ptr_scores size : " << std::size(ptr_scores) << std::endl;
   
    // CANNOT use range-based for loop 
    /*
    for( auto s : ptr_scores ) {
       std::cout << "value : " << s << std::endl;
    }
    */

   // Para liberar a memória de um vetor dinâmico é preciso usar delete com colchetes [] 
   delete [] ptr_scores;    


    // O tamanho de um vetor dinâmico pode ser uma variável, com valor fornecido durante a execução do programa
    std::cout << "Digite o tamanho do vetor ==> ";
    int tam_vet;
    std::cin >> tam_vet;

    int * vet = new int [ tam_vet ];
    //Apesar do nome vetor 'dinâmico', o vetor não muda de tamanho DEPOIS DE CRIADO.
    // Caso eu atualize o tam_vet com outro valor, só é possível utilizar esse novo tamanho de vetor caso faça um novo 'new', ou seja, alocando um novo bloco de memória diferente 

    // O ponteiro de um vetor dinâmico pode ser usado como se fosse um vetor (O ponteiro tbm terá o nome do vetor dinâmico)
    vet [0] = 15;
    vet [1] = 10;
    vet [2] = 2;

    std::cout << "vet : " << vet << std::endl;
    std::cout << "* vet : " << * vet << std::endl;
    std::cout << "vet[0] : " << vet[0] << std::endl;
    std::cout << "vet[1] : " << vet[1] << std::endl;
    std::cout << "vet[2] : " << vet[2] << std::endl;

    std::cout << "-------------------\n";

    for( size_t i { }; i < tam_vet; ++i  ){

        if ( i > 2 ) {
            std::cout << "[Unknow] ";
        }

       std::cout << "value : " << i << " -->  " << vet[i] << std::endl;

    }

    delete [] vet;


    return 0;
}
