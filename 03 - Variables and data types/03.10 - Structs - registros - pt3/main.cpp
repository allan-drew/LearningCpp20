#include <iostream>
#include <cstring> // necessário para usar strcpy

///////////////////// STRUCTS / REGISTROS /////////////////////

// ================================================================

// Pode-se também criar registros sem nome
struct { 
    char nome [40];
    int monthlyListeners;
    int numberOfMusics;
} 
dubdogz; // Porém, criar uma variável será obrigatório

// ================================================================
struct { 
    int x;
    int y;
}
ponto; 


// ============================================ 
// Pode-se também usar structs dentro de structs 

struct computador {

    char marca[40];
    char modelo[40];
    float preço;
    unsigned ano;
    char paisDeFabricacao[40];

};

struct notebook {

    computador dados;

    struct { 
        int largura;
        int altura;
    } dimensao;

};



// ====================================================================================== 

int main() {

    notebook myNotebook;

    myNotebook.dados.preço = 4000;
    myNotebook.dados.ano = 2022;
    myNotebook.dimensao.largura = 35;
    myNotebook.dimensao.altura = 25;
    

    std::cout << " O preco do meu notebook e R$ " << myNotebook.dados.preço << std::endl;
    std::cout << " O ano do meu notebook e " << myNotebook.dados.ano << std::endl;
    std::cout << " A largura do meu notebook e " << myNotebook.dimensao.largura << " cm " << std::endl;
    std::cout << " A altura do meu notebook e " << myNotebook.dimensao.altura << " cm com tela aberta " << std::endl;



    return 0;
}
