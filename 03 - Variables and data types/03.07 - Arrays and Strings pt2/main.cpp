#include <iostream>

int main() {

    // ERRO : "S" representa o endereço inicial do conjunto composto pelos caracteres 'S' e '\0'
    //char camisa = "S"; 

    // OK : 'S' corresponde a um único caractere que possui o código ASCII 83
    // mas não é um vetor. É uma variável comum que guarda um char
    char camisa = 'S';

    std::cout << "------------------------------------------------------------------------------" << std::endl;

    
    const int tamVet = 30;
    /*
    char nome[tamVet];
    std::cout << "Entre com seu nome : " << std::endl;
    std::cin >> nome;
    std::cout << "O nome e : " << nome << std::endl; // enter, espaço e tabulação indicam fim da entrada para cin
    // Portanto, cin não consegue ler palavras que tem espaços dentro dela
    */

    //Como ler uma entrada que contém espaços ? 
    // Usar função orientada a linhas
    // A função cin.getline() lê uma linha
    char nomeCidade [tamVet];
    std::cout << "Entre com o nome da sua cidade : " << std::endl;
    std::cin.getline(nomeCidade, tamVet);
    std::cout << "O nome da cidade e : " << nomeCidade << std::endl;

    // Para misturar cin com cin.getline é necessário descartar o caractere \n do buffer
    // A função cin.get() sem parâmetros pode ser usada para ler e descartar um caractere
    char anoDeNascimento [tamVet];
    std::cout << "Entre com o ano de nascimento : " << std::endl;
    std::cin >> anoDeNascimento;
    std::cout << "O ano de nascimento e : " << anoDeNascimento << std::endl;
    std::cin.get(); // caracter \n lido e descartado

    char rua [tamVet];
    std::cout << "Entre com o nome da rua : " << std::endl;
    std::cin.getline(rua, tamVet);
    std::cout << "A rua e : " << rua << std::endl;


    std::cout << "------------------------------------------------------------------------------" << std::endl;


    // A classe string (std::string) fornece uma solução mais simples 
    // No lugar de um vetor utiliza-se uma variável do tipo string.
    // O gerenciamento automático do tamanho da string traz um custo (uma penalidade) ao desempenho do programa

    std::string nomeDoCao = "Tobby";
    std::cout << " O nome do cachorro e..." << nomeDoCao << std::endl;
    std::cout << " A primeira letra do nome do cachorro e..." << nomeDoCao[0] << std::endl;

    std::string racaDoCao;
    racaDoCao = "Beagle";
    std::cout << " O raca do cachorro e..." << racaDoCao << std::endl;
    std::cout << " A primeira letra da raca do cachorro e..." << racaDoCao[0] << std::endl;


    std::cout << "------------------------------------------------------------------------------" << std::endl;


    //// std::string 
    std::string cars[4] = { "Volvo" , "BMW" , "Volks" , "Ford" }; 

    for ( int i = 0 ; i < 4 ; i++ ) {
        std::cout << i << " ==> " << cars[i] << " / ";
    }
    std::cout << std::endl;

    std::cout << " A terceira marca de carros e ----> " << cars[2] << std::endl;


    std::cout << std::endl;
    std::cout << "------------------------------------------------------------------------------" << std::endl;

    ////
    // Além do tipo string simplificar a atribuição, também é possível atribuir uma string a outra:
    std::string felino = "Pantera";
    std::string animal;
    animal = felino;
    std::cout << " O felino e : " << felino << std::endl;
    std::cout << " O animal e : " << animal << std::endl;



    ///// INICIALIZAÇÃO DE VETORES e STRINGS A PARTIR DO C++11
    char vetorTic[20] = "Tic";
    char vetorTac[20] = {"Tac"}; // C++11
    char vetorToe[20] { "Toe" }; // C++11 (sem o =)

    std::string stringToc1 = "Toc 1";
    std::string stringToc2 = {"Toc 2"}; // C++11
    std::string stringToc3 { "Toc 3" }; // C++11 (sem o = )



    return 0;
}
