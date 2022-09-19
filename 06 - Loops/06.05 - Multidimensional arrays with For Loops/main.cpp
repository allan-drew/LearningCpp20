#include <iostream>

int main() {

    // multidimensional array (MATRIZES)

    // A multidimensional array can be termed as an array of arrays that stores homogeneous data in tabular form. Data in multidimensional arrays are stored in row-major order.

    // Uma matriz é um vetor bidimensional 
    // Uma matriz é um vetor em que cada elemento é um vetor

    // Um elemento da matriz é acessado através de dois índices
        // 1º -> linha da matriz
        // 2º -> coluna da matriz

    // Laços FOR aninhados são ideais para processar matrizes
    // Um laço controla a linha e outro controla a coluna

    const int MaxLinha { 3 };
    const int MaxColuna { 4 };

    int Matriz [MaxLinha] [MaxColuna] = 
    {
        {2, 4, 8, 9},
        {1, 2, 5, 10},
        {3, 7, 0, 10},
    };

    for (int i = 0; i < MaxLinha; i++ )
    {

        for (int j = 0; j < MaxColuna; j++) 
        {
            std::cout << Matriz[i][j] << "\t";
        }
    std::cout << "\n";

    }



    return 0;
}
