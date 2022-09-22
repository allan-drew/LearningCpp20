#include <iostream>



// ================================================================================= 
void add_chuteira ( int & calcado ) // calcado é um apelido para chuteira
{
    ++calcado;
    std::cout << " Number of chuteiras : ==>  " << calcado << std::endl;
    std::cout << " Address of calcado => " << &calcado << std::endl;
}
// ================================================================================= 



int main() {

    //////// DECLARING AND USING REFERENCES //////////////

    //// A reference is an alias variable that you can use to reference an original variable

    // Uma referência consiste em um apelido/pseudônimo (alias) de uma variável, ou seja, apesar de possuírem nomes distintos, uma referência e sua variável de inicialização ocupam O MESMO ENDEREÇO DE MEMÓRIA. 

    // A modificação de uma afeta a outra.


    ////// Example : RATO / ROEDOR 
    int rato = 25;
    int& roedor = rato; //// roedor é um apelido/pseudônimo/alias para rato
        // O & está servindo para criar uma referência, e não como um operador de endereço 


    // A referência permite usar ambos os nomes para acessar o mesmo valor
    // e a mesma posição de memória 

    std::cout << " rato : " << rato << std::endl;
    std::cout << " roedor : " << roedor << std::endl;
    std::cout << " Address of rato => " << &rato<< std::endl;
    std::cout << " Address of roedor => " << &roedor<< std::endl;
    std::cout << "\n";
    std::cout << "\n";


// =========================================================================================== 
    // O principal uso de referências é como parâmetro de funções.
    // A função trabalha com o dado original

    // Representa uma alternativo ao uso de ponteiros

    int chuteira = 5;

    std::cout << " chuteira (before): " << chuteira << std::endl;

    add_chuteira (chuteira);

    // A modificação da referência 'int & calcado' na função 'add_chuteira' afetou o valor de 'chuteira' dentro da função main
    std::cout << " chuteira (after): " << chuteira<< std::endl;

    // 'calcado' e 'chuteira' possuem O MESMO ENDEREÇO DE MEMÓRIA. 
    std::cout << " Address of chuteira => " << &chuteira<< std::endl;



// =========================================================================================== 



    std::cout << "\n";
    return 0;
}
