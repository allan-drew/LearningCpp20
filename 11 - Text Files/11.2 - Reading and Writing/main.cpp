#include <iostream>

#include <fstream> // File Stream

#include <vector>


int main() {

    // =================================================================================
    // PROGRAMA PARA LER NÚMEROS NO MEIO DE UM TEXTO COM PALAVRAS MISTURADAS
    // E ESCREVER OS VALORES EM UM ARQUIVO SEPARADO (writing_listeners.txt)

    std::ifstream fileReading; 

    std::ofstream fileWriting;

    fileReading.open("listeners_artists.txt");

    fileWriting.open("writing_listeners.txt");

    if ( fileReading.is_open() ) 
    {
        std::cout << "Sucess to open file" << std::endl;
        std::cout << "\n";
    } else 
    {
        std::cout << "FAILED to open file!" << std::endl;
        exit (EXIT_FAILURE); 
    }


    int listeners;
    char someChar[50];


    fileReading >> listeners; // Primeira leitura. A "missão" do fileReading é ir no arquivo e procurar um int, já que listeners é do tipo int

    while ( ! fileReading.eof () ) // vai ler o arquivo enquanto não estiver no eof (end of file). 
                    // O fileReading só funciona em relação à última leitura, por isso é necessário ler antes do while
    {
        
        if ( fileReading.good() ) // Se a última leitura foi boa, exibir o número
                                    // e escrever no arquivo separado  
        {
                std::cout << listeners << std::endl;
                fileWriting << listeners << std::endl;

        } else // Se a última leitura não foi boa 
        {
            fileReading.clear();
            fileReading >> someChar; 
        }

        fileReading >> listeners;
    }

    fileReading.close();

    return 0;
}
