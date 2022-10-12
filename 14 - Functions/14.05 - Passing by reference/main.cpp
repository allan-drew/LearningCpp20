#include <iostream>

/////////////// PASS BY REFERENCE /////////////

// Passagem de parâmetros por referência: 
// Função chamada recebe o endereço da variável usada como argumento na chamada da função. 

void say_age ( int& age ); // Passing by reference 


int main() {

    int age {45}; 

    std::cout << " age - before we call the function : " << age << " ///// Address of age (& age) : " << &age << std::endl;

    std::cout << std::endl;

    say_age (age); 
        //Quando se tem essa chamado, 
        // ao invés de tirar uma cópia do valor de 'age' (23) e enviar para o &age da função, 
        // na verdade estará colocando em &age uma referência do local da memória onde a variável 'age' (23) está 

        // É como se uma variável que não pertence à função 'say_age' pudesse ser enxergada e manipulada 


    std::cout << std::endl;

    std::cout << " age - after we called the function : " << age << " ///// Address of age (& age) : " << &age << std::endl;


    return 0;
}

//Definition
void say_age ( int& age ) { // Passing by reference 
    // A função recebe a referência

    ++(age);
    std::cout << " Hello! You are ... " << age << " years old. " << " ///// Address of age (& age) : " << &age << std::endl;

}
 