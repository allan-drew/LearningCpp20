#include <iostream>

// ===================================
    // Referências foram inicialmente criadas para trabalhar com REGISTROS e OBJETOS 
// ===================================


// Registro atleta
struct atleta 
{
    int gols;
    int chutes;
    float percentual;
};


// ===================================
// Funções usando referência

//Declaration
void calcPercent (atleta & atl);

void exibir (const atleta & atl);
// ===================================



int main() {

    atleta vinijr = { 10, 13 }; // 10 gols e 13 chutes 
    atleta njr = { 6, 9 }; // 6 gols e 9 chutes 

    std::cout << " Vinicius Jr : \n";
    calcPercent(vinijr);
    exibir(vinijr);

    std::cout << "\n";

    std::cout << " Neymar Jr : \n";
    calcPercent(njr);
    exibir(njr);


    return 0;
}


// A função 'calcPercent' modifica o campo 'percentual' de atl, que consequentemente modifica os campos 'percentual' de vinijr e njr
void calcPercent (atleta & atl) 
{
    // Testando se é uma divisão por zero (se o denominador é zero)
    if ( atl.chutes != 0 )
    {
        // Se o denominador não for zero
        atl.percentual = 100 * ( float (atl.gols) / float (atl.chutes) );
    } else 
    {
        // Se o denominador for zero
        atl.percentual = 0;
    }

}


// a função 'exibir' recebe 'vinijr' e 'njr' em uma referência
// Como só vai exibir e não vai modificar nenhum campo, colocou-se o 'const' 
void exibir (const atleta & atl) 
{
    std::cout << "  Gols : " << atl.gols << "\n";
    std::cout << "  Chutes : " << atl.chutes << "\n";
    std::cout << "  Percentual : " << atl.percentual << " %" << "\n";
}
