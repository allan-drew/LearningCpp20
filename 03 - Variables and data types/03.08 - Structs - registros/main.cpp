#include <iostream>
#include <cstring> // necessário para usar strcpy

///////////////////// STRUCTS / REGISTROS /////////////////////

// O registro agrupa informações de tipos possivelmente diferentes sob um único identificador

// Como armazenar um cadastro completo de 22 jogadores (nome, idade, altura, peso, gols, etc) ? 
// Criar vários vetores não é a melhor solução; A solução é usar registros (structs). 

//Structs, também conhecidas como Registros, definem tipos de dados que agrupam variáveis sob um mesmo tipo de dado. 
// A ideia de usar uma struct é permitir que, ao armazenar os dados de uma mesma entidade, isto possa ser feito com uma única variável.

// Structures (also called structs) are a way to group several related variables into one place. 
// Each variable in the structure is known as a member of the structure.
// Unlike an array, a structure can contain many DIFFERENT data types (int, string, bool, etc.).

struct  jogador
{
    //Os membros do registro são definidos por instruções de declaração de variáveis
    char nome [20];
    float salario;
    unsigned gols;
};

// Tipos definidos através de registros se comportam de forma semelhante aos tipos básicos da linguagem C++
// Com isso, é possível passar registros como argumentos de funções
void exibir ( jogador j ) { 
    std::cout << " < Exibindo informacoes sobre o jogador > " << " " 
    << j.nome << " " 
    << j.salario << " "
    << j.gols << std::endl;
}

// ====================================================================================== 

int main() {

// Após a declaração do registro, pode-se criar variáveis desse novo tipo. 
// 'jogador' vira um novo tipo de dado na linguagem, assim como os tipos int, double, etc.
// 'a' e 'b' são variáveis do novo tipo 'jogador'
// Quando criamos uma variável do tipo jogador, então, alocamos espaço em memória 
// Nos casos abaixo, alocamos memória suficiente para alocar o nome, salario e gols.
    jogador a = { "Zico" , 200000 , 333};
    jogador b = { "Andrade" , 100000 , 25};

    jogador gabigol;
    gabigol.salario = 500000;
    gabigol.gols = 150;
    strcpy (gabigol.nome, "Gabriel Barbosa");

    // Os compos individuais de um registro são acessados através do operador membro ( . ) 
    std::cout << " Meias do time : " << a.nome << " e " << b.nome << std::endl;
    std::cout << " Total de salarios de " << a.nome << " e " << b.nome << " = " << a.salario + b.salario << std::endl; 
    std::cout << " O " << gabigol.nome << " fez " << gabigol.gols << " gols, recebendo R$ " << gabigol.salario << std::endl;
    std::cout << " ----------------------------------------------- \n";


// Pelo registro ser semelhante a um tipo básico, podemos criar vetores de registros
    jogador equipe[22]; // cria vetor de 22 jogadores

    std::cout << " === Equipe === " << std::endl;

    std::cout << "  Nome do primeiro jogador : ";
        std::cin >> equipe[0].nome;
    std::cout << "  Salario do primeiro jogador : ";
        std::cin >> equipe[0].salario;
    std::cout << "  Numero de gols do primeiro jogador : ";
        std::cin >> equipe[0].gols;

    std::cout << equipe[0].nome << std::endl;
    std::cout << equipe[0].salario << std::endl;
    std::cout << equipe[0].gols << std::endl;
    std::cout << " ----------------------------------------------- \n";

// ----------------------------------- 

    exibir(a);
    exibir(b);
    exibir(gabigol);
    exibir(equipe[0]);
    std::cout << std::endl;

    return 0;
}
