#include <iostream>

int main() {

    // multidimensional array (MATRIZES)

    const int numberOfArtists = 4;
    const int NumberOfMonths = 5; 

    // Vetor de endereços ( * artists ) para caracteres constantes (const char)
    const char * artists [numberOfArtists] =  
    { "Vtg Culture", "Dubdogz", "Ben Bohmer", "Lane 8" };
        // As constantes "Vtg Culture", "Dubdogz", "Ben Bohmer" e "Lane 8" são guardadas em um endereço de memória onde não podem ser modificadas (const)
        // Cada constante tem um endereço de memória 

        // No vetor 'artists' estamos guardando 4 endereços diferentes (endereço do V, D, B e L)
                    // Ao atribuir "Vtg Culture", "Dubdogz", "Ben Bohmer" e "Lane 8", estamos guardando o endereço dos primeiros caracteres (V, D, B e L) das constantes

        // Ao passar para cout o endereço de um caracter, ele assume que esse caracter é o primeiro de uma sequência e exibe até encontrar o \0
        // Por isso conseguimos exibir os nomes ao fazer --> std::cout << artists[i] << ": \t";


    double mxListeners [numberOfArtists][NumberOfMonths] = 
    {
        { 5.5, 6.4, 6.7, 8.1, 6.9 },
        { 4.2, 3.4, 5.2, 6.3, 5.8 },
        { 3.1, 6.0, 5.3, 6.5, 6.6 },
        { 2.3, 4.4, 6.2, 7.0, 7.4 },
    };

    std::cout << "\n Number of Listeners in Millions in recent months : \n";

    for (int i = 0; i < numberOfArtists; ++i )
    {

        std::cout << artists[i] << ": \t";

        for ( int j = 0; j < NumberOfMonths; ++j ){
            std::cout << mxListeners[i][j] << "\t";
        }
    
        std::cout << std::endl;

    }

    std::cout << "\n";
    std::cout << "========================================";
    std::cout << "\n";

// ==============================================================================================================

    // Em muitas aplicações o tamanho da matriz é conhecido apenas durante a execução do programa 
    // Portanto sendo necessário a criação de uma matriz dinâmica 

    // Soluções :
        // 1 - simular uma matriz com um vetor dinâmico
        // 2 - Criar um vetor de vetores dinâmicos (matriz dinâmica)

// --------------------------------------- 

    ////// 1 - simular uma matriz com um vetor dinâmico

    int linhas {0};
    int colunas {0};

    std::cout << "Digite a quantidade de linhas da matriz : ";
    std::cin >> linhas;
    std::cout << "Digite a quantidade de colunas da matriz : ";
    std::cin >> colunas;

    // simulando uma matriz com um vetor
    int * matrizSimulada = new int [linhas*colunas]; // matrizSimulada é um vetor, com o tamanho de linhas*colunas

    std::cout << "Digite os elementos da matriz simulada (numeros inteiros) : \n";

    // atribuindo valores com cin
    for ( int i = 0; i < linhas; ++i )
    {
        for ( int j = 0; j < colunas; ++j )
        {
            // acessando às posições (aos índices do vetor que simula uma matriz) 
            std::cout << "[" << i*colunas + j << "] --> "; // acesso aos índices do vetor
            std::cin >> matrizSimulada [i*colunas + j]; // acesso aos índices do vetor
                // Supondo uma matriz 3x4 (3 linhas, 4 colunas)
                // Se eu quiser acessar o elemento no índice 2,2 (que na verdade é a terceira linha e terceira coluna, pois começa no zero), temos : 
                // 2*4 + 2 = 10 ---> posição 10 do vetor que simula uma matriz

                // matriz simulada : 
                    // 0 , 1 , 2 , 3
                    // 4 , 5 , 6 , 7
                    // 8 , 9 , 10 , 11 

                // vetor que simula a matriz :
                    // 0 , 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10 , 11
        }
    }

    // Exibindo com cout 
    for (int i = 0; i < linhas; ++i )
    {

        for ( int j = 0; j < colunas; ++j ){
            std::cout << matrizSimulada[i*colunas + j] << "\t";
                // Se eu quiser acessar e exibir o elemento que está no índice 1,2 ( que na verdade é a segunda linha e terceira coluna ), temos : 
                // 1*4 + 2 = 6 ---> posição 6 do vetor que simula uma matriz
        }
    
        std::cout << std::endl;
    }

    delete [] matrizSimulada;

// --------------------------------------- 

    ///////// 2 - Criar um vetor de vetores dinâmicos (matriz dinâmica)

    int lines = 4;
    int columns = 5;

    // ponteiro que guarda o endereço de um inteiro
    int* *matz = new int* [lines];

    // int *vetorDinamico = new int [4] 
            // com o new int[4], alocamos 4 blocos de memória, guardando 4 inteiros
            // e é guardado em uma variável do tipo ponteiro
            // o ponteiro aqui guarda endereços de uma memória que contém inteiros (int *vetorDinamico)


    // int* *matrizDinamica = new int* [4]
            // na matriz dinâmica, faz-se a mesma coisa, porém...
            // em vez de guardar 4 inteiros, estamos alocando 4 endereços de inteiros (new int* [4]) 
            // o ponteiro aqui guarda endereços de uma memória que contém outro endereço (int* *matrizDinamica)



    return 0;
}
