#include <iostream>

#include <fstream> // File Stream

#include <vector>

int main() {

    // ============================================================ 
    // LEITURA DE ARQUIVOS TEXTO
    // READING FROM FILES WITH ifstream

    // É necessário incluir o arquivo de inclusão fstream ( file stream )
    // Temos que o arquivo de cabeçalho fstream : 
        // Define uma classe 'ifstream' para manipular a entrada 
        // Porém NÃO EXISTE um objeto predefinido
        // É necessário criar um objeto do tipo ifstream.

        // Associar um objeto ifstream com um arquivo do disco usando a função open (). 
        // Fechar o arquivo com a função close ()

    std::ifstream file_reading; // cria um objeto ifstream
    file_reading.open("electronic_artists.txt");
            // Se o arquivo não existir no disco, as tentativas de uso do objeto ifstream vão falhar

    // O método is_open() permite verificar se um arquivo foi aberto corretamente
    if ( file_reading.is_open() ) 
    {
        std::cout << "Sucess to open file" << std::endl;
        std::cout << "\n";
    } else 
    {
        std::cout << "FAILED to open file!" << std::endl;
        exit (EXIT_FAILURE); // exit sai do programa com código de falha --> exit (1);
    }

    // std::vector is a sequence container that encapsulates dynamic size arrays.
    std::vector<std::string> names_vector; // Criando vector 
    /////// 

    std::string input; 
    while ( file_reading >> input ) 
            // file_reading >> input --> neste momento, a "missão" do file_reading é ir no arquivo e buscar uma string, já que 'input' é um tipo string
            // file_reading >> input ---> lê o valor para 'input' e também retorna true ou false se a leitura foi bem sucedida ou não
            // Quando chegar no fim do arquivo, a leitura retornará false pois o fim do arquivo não é uma string
    {
        std::cout << "Reading file... an artist name was found \n";
        
        // Adding names to the vector
        // Adds a new element at the end of the vector, after its current last element. 
        // push_back method() in C++ is a method that is part of the vector as a data structure in C++. 
        // It is used for pushing elements from the back of the vector.
        names_vector.push_back(input);
    }

    if ( file_reading.eof() ) // eof --> end of file
    {
        std::cout << "End of file! \n\n";
    }  

    ///////
    // Printando a informação lida
    for ( std::string names : names_vector )
    {
        std::cout << names << std::endl;
    }

    file_reading.close();


    return 0;
}
