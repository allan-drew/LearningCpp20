#include <iostream>


// FUNCTIONS WITH ARRAYS

// Função que soma os elementos de um vetor de tamanho n
// Somar elementos de um vetor é uma tarefa comum, então, vale a pena criar uma função para isso.
// ==============================================

int sumSales ( int sales[] , int n );
// int sumSales ( int * sales , int n );
        // Em C++, o vetor é construído para funcionar como um ponteiro
        // Portanto, seria possível também usar a notação ---> int * sales
// ==============================================



int main() {


    // Sales in a period of days
    const int numberOfDays = 7;
    int gameSales[numberOfDays] = { 1, 4, 2, 3, 0, 5, 2 };
    int gameTotalSales = sumSales ( gameSales , numberOfDays );
                                    // No caso de vetores, a chamada passa um endereço e não o conteúdo do vetor
                                    // Porém, ainda assim, a passagem do argumento é feita por CÓPIA
                                    // Ou seja, o endereço é copiado para o parâmetro da função
                                    // Os elementos do vetor não são copiados, mas o endereço sim 

    std::cout << " Total sales of games in " << numberOfDays << " days => " << gameTotalSales << std::endl;

    // ------------------------------------------

    int bookSales[numberOfDays] = { 0, 2, 4, 5, 1, 7, 9 };
    int bookTotalSales = sumSales ( bookSales, numberOfDays );

    std::cout << " Total sales of books in " << numberOfDays << " days => " << bookTotalSales << std::endl;




    return 0;
}


// ==============================================
int sumSales ( int sales[] , int n ) {
// int sumSales ( int *sales, int n ) {

    int sum = 0;

    for ( int i = 0; i < n; ++i ) {
        sum += sales[i];
    }

    return sum;

}
// ==============================================
