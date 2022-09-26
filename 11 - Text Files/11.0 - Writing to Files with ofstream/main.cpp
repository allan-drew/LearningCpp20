#include <iostream>

#include <fstream> // File Stream


int main() {

    /////////// TEXT FILE  /  ARQUIVOS TEXTO

    // ============================================================ 
    // SAÍDA EM TELA 

    // Para usar o std::cout é necessário incluir o arquivo de cabeçalho iostream (#include <iostream>).
    // Temos que o arquivo de cabeçalho iostream : 
        // Define uma classe 'ostream' para manipular a saída 
        // Declara um objeto da classe ostream chamado 'cout' 
        // Esse objeto sabe como exibir na tela
    // ============================================================ 



    // ============================================================ 
    // SAÍDA EM ARQUIVO TEXTO em vez de saída em tela
    // WRITING TO FILES WITH ofstream

    // É necessário incluir o arquivo de inclusão fstream ( file stream )
    // Temos que o arquivo de cabeçalho fstream : 
        // Define uma classe 'ofstream' para manipular a saída 
        // Porém NÃO EXISTE um objeto predefinido, como o cout na saída em tela 
        // É necessário criar um objeto do tipo ofstream. O objeto do tipo ofstream é uma variável comum e, portanto, pode ter um nome qualquer
        // Associar um objeto ofstream com um arquivo do disco usando a função open (). 
        // Fechar o arquivo com a função close ()

    char nome[50];
    int idade;
    char curso[50];

    std::ofstream file_out; // cria um objeto para a saída (semelhante ao cout)

    file_out.open("aluno_info.txt"); 
            // O método open() cria um novo arquivo se ele não existir
            // E sobrescreve o arquivo se ele existir 
            // O arquivo é criado na pasta onde o executável está rodando

    std::cout << "Digite o nome do aluno : "; 
    std::cin.getline (nome, 50);

    // Para misturar cin com cin.getline é necessário descartar o caractere \n do buffer
    std::cout << "Digite a idade desse aluno : "; 
    std::cin >> idade;
    std::cin.get(); // caracter \n lido e descartado

    std::cout << "Digite o curso desse aluno : "; 
    std::cin.getline (curso, 50);

    // GRAVANDO INFORMAÇÕES NO ARQUIVO (mostrando a saída do programa no arquivo): 
    file_out << "NOME = " << nome << std::endl;
    file_out << "IDADE = " << idade << std::endl;
    file_out << "CURSO = " << curso << std::endl;

    // This is like...std::cout << bla bla << ...



    file_out.close();



    return 0;
}
