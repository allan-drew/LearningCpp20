#include <iostream>

int main() {

    // RANGE BASED FOR LOOP

    // Simplifica a tarefa de percorrer todos os elementos de um vetor

    int vet[5] = { 3, 6, 9, 0, 30};

    for ( int i : vet )
    {
        std::cout << i << ", "; 
    }

std::cout << std::endl;
std::cout << "----------------------------------" << std::endl;

//=========================================================================

    int scores[] {2,5,5,1};
    int sum {0};  ////// Store result in 'sum' variable

    //// Range based for loop 
    // Will get each element and Add to 'sum'
    for ( int element : scores) {
        sum += element;
        std::cout << element << ", "; 

    }

    std::cout << "Score sum : " << sum << std::endl;


std::cout << "----------------------------------" << std::endl;

//=========================================================================

    char message [5] {'H', 'e', 'l', 'l', 'o'};

    std::cout << "message : "; 

    for (auto c : message) {
        std::cout << c;
    }


std::cout << std::endl;

    return 0;
}
