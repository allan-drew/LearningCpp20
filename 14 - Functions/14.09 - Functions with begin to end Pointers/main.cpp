#include <iostream>


// FUNCTIONS WITH BEGIN TO END POINTERS
// ==============================================

// Funções que trabalham com vetores precisam receber : 
    // a localização do início do vetor
    // o número de elementos do vetor

// Porém, existe uma outra abordagem : 
    // passar uma faixa de elementos 
    // Isso pode ser feito usando dois ponteiros: um identificando o início do vetor e outro identificando o fim 


int sumVet ( int * begin, int * end ) { // A função recebe dois ponteiros (início e fim)

    int sum = 0;

    // O ponteiro atual recebe o endereço do início 
    // Enquanto atual for diferente de fim, realizam-se as somas. Soma com o elemento que está dentro de atual (*atual)
    // Quando atual for igual a fim, tem-se o fim, retornando a soma (return sum)
    for ( int * atual = begin; atual != end; ++atual ) {
        std::cout << *atual << " ";
        sum = sum + *atual;
    }
    std::cout << "\n";

    return sum; 
}



int main() {

    const int numberOfGames = 8;

    int goals[numberOfGames] = { 1, 3, 5, 0, 1, 0, 2, 2};

    int total = sumVet (goals, goals + numberOfGames);
    std::cout << "Sum of goals : " << total << std::endl;


    std::cout << "\n";
    total = sumVet (goals, goals + 3);
            // goals aponta para o início
            // goals + 3 aponta para o quarto elemento. Ou seja, o fim. (Um após o último)
    std::cout << "Sum of goals (first three games): " << total << std::endl;


    std::cout << "\n";
    total = sumVet (goals + 6, goals + 8);
            // goals + 6 aponta para o sétimo elemento
            // goals + 8 aponta para o nono elemento, ou seja, o fim. (Um após o último)
    std::cout << "Sum of goals (last two games): " << total << std::endl;



    return 0;
}



// ==============================================
