#include <iostream>

// Pointers to functions (Ponteiros para funções)

// A utilidade do endereço de uma função é poder passar o endereço de uma função para outra. 
// Permite que uma função chame outra. 
// Embora isso já seja possível (exemplo: chamar uma função qualquer dentro da função main () ), 
// vai permitir passar endereços de funções diferentes em cada chamada.

// Para obter o endereço de um função, basta usar o seu nome sem parênteses. 

void sayAge ( int a ) {

    std::cout << "Hello!, you are " << a << " years old! \n"; 
};


// Um ponteiro para uma função precisa explicitar o tipo da função
    // tipo da assinatura (argumentos da função)
    // tipo de retorno
 
void (*pointerFunction) (int); //pointerFunction aponta para funções específicas 
                                // que recebem int e retornam void
    // O parânteses é necessário, pois caso contrário, 
    // pointerFunction seria uma função que retorna um ponteiro (endereço) de um void 


// ========================================================================================================= 

// Normalmente utilizam-se esses ponteiros para funções em parâmetros de outras funções 
// Portanto, uma função terá um resultado dependente de outra função que estamos passando

double edu ( int kms )
{
    // função que modela edu
    return 6 * kms; // Edu leva 6 min para concluir cada km 
}

double wal ( int kms )
{
    // função que modela wal
    return 6 * kms + 0.054 * kms*kms; // Wal leva 6 min para concluit cada km, MAIS 0.005 min * kms*kms
}


void estimar ( int KM, double (*pointerFunct)(int) )
{
    std::cout << KM << " kms levam ";
    std::cout << pointerFunct(KM) << " mins \n";
}
// Usando pointer to functions, não é necessário mudar o código da função estimar,
// caso existam outras estimativas a serem feitas
// bastaria modelar as outras estimativas
// ex.:
double allan ( int kms )
{
    // função que modela allan
    return 5.9 * kms;
}



// ========================================================================================================= 

int main() {

    pointerFunction = sayAge; //pointeiro apontando para a função sayAge
    sayAge (18); // chamando com a função
    pointerFunction (18); // chamando com o ponteiro
    (*pointerFunction) (18); // chamando com o ponteiro (neste caso, necessário usar o parênteses)
        // Como pointerFunction é um ponteiro para uma função, 
        // *pointerFunction é uma função, e deve-se usar (*pointerFunction)

// ========================================================================================================= 
    std::cout << "\n";

    std::cout << " Digite a quantidade de kms (quilometros) : \n";
    int quilometros;
    std::cin >> quilometros;

    std::cout << " Estimativa de Edu : \n";
    estimar ( quilometros, edu );
    
    std::cout << " Estimativa de Wal \n";
    estimar ( quilometros, wal );

    std::cout << " Estimativa de Allan \n";
    estimar ( quilometros, allan );


    return 0;
}
