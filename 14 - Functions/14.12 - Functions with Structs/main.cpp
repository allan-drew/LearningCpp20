#include <iostream>

// *** warning: This program is not optimized to calculate cents ** // 


// Functions with Structs/Registros

// Tipos definidos através de registros (structs) se comportam de forma semelhante aos tipos básicos da linguagem C++

struct computerPrice
{
    int Dolars;
    double Cents;
};

// Com isso, é possível passar registros como argumentos de funções
            // Como se comportam semelhante aos tipos básicos
            // isso significa que os registros são passados POR VALOR (BY VALUE)
            // Ou seja, a função recebe uma CÓPIA do registro

computerPrice sumPrice ( computerPrice cp1, computerPrice cp2 )
{
    computerPrice TotalPrice;
    TotalPrice.Dolars = cp1.Dolars + cp2.Dolars;
    TotalPrice.Cents =  cp1.Cents + cp2.Cents;

    return TotalPrice;
} 

void ShowPrice ( computerPrice cp ) 
{
    std::cout << cp.Dolars << " Dolars, and " << cp.Cents << " Cents\n"; 
}

// ============================================================================================================


// Para ser possível NÃO passar cópias, uma alternativa é passar o endereço do registro
// usando-se ponteiros nos parâmetros

// Quando o registro guarda uma grande quantidade de informações
// o ideal é passar para a função apenas o endereço do registro

struct smartphonePrice 
{
    int dolar;
    double cent;
};

// Passando registros como argumentos de funções
// Neste caso, passando para a função apenas o endereço
// A função recebe endereços, mas não retorna endereços, retorna um registro ou seja, retorna cópia 
        // Com isso, continua com cópias de grandes quantidades de dados

// A solução é passar um terceiro argumento para ser modificado, e não retornar o registro, e sim void

void sumSmartphonePrice ( const smartphonePrice * price1, 
                            const smartphonePrice * price2, 
                            smartphonePrice * sumPrice )
{
    sumPrice->dolar = price1->dolar + price2->dolar;
    sumPrice->cent =  price1->cent + price2->cent;

    return ;
} 


void ShowSmartphonePrice ( const smartphonePrice * spp ) 
{
    std::cout << spp->dolar << " Dolars, and " << spp->cent << " Cents\n"; 
}



// ================================================================= 

int main() {

    computerPrice apple = { 7999, 0.50 };
    computerPrice dell = { 6499, 0.12 };

    computerPrice computers = sumPrice ( apple, dell );
    std::cout << "Total two computers : ";
    ShowPrice ( computers );

    computerPrice positivo = { 1000, 0.1 };

    
    std::cout << "Total three computers : ";
    ShowPrice ( sumPrice (computers, positivo) );

// =============================================================================

    std::cout << "\n";
    std::cout << " ============================================= " << std::endl;
    std::cout << "\n";


    smartphonePrice samsungS10 = { 2500, 0.2 };
    smartphonePrice xiaomiRedmi = { 1900, 0.5 };
    smartphonePrice sumTwoPhones; 

    sumSmartphonePrice( &samsungS10, &xiaomiRedmi, &sumTwoPhones );
    std::cout << "Total two smartphones : ";
    ShowSmartphonePrice (&sumTwoPhones);
    
    smartphonePrice appleiPhone12 { 4000, 0.1 };
    smartphonePrice sumThreePhones; 
    sumSmartphonePrice( &sumTwoPhones, &appleiPhone12, &sumThreePhones );

    std::cout << "Total three smartphones : ";
    ShowSmartphonePrice (&sumThreePhones);



    return 0;
}
