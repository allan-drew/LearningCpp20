#include <iostream>

int main() {

    ///////////// COMPARING POINTERS AND REFERENCES ////////////////

        // REFERENCES  
            // - Must be initialized at declaration
            // - Can't be changed to reference something else 
            // - Don't need to use dereferencing for reading and writing

        // POINTERS
            // - Can be declared un-initialized (will contain garbage addresses)
            // - Can be changed to point somewhere else
            // - Must go through dereference operator to read/write through pointed to value

    // As referências são mais simples de serem usadas, porém menos flexíveis do que os ponteiros. 
    // Isso porque os ponteiros podem ser modificados para apontar para outro lugar
    // já as referências devem ser construídas na inicialização e não podem ser refeitas


    int macbook = 7500;
    int & macintosh = macbook; // macintosh é uma referência e está sendo um apelido para macbook
    int * notebook = &macbook; // notebook é um ponteiro, que recebe o endereço de macbook

    // O valor 7500 pode ser acessado usando macbook, macintosh ou *notebook : 
    std::cout << "macbook : " << macbook << std::endl;
    std::cout << "macintosh : " << macintosh << std::endl;
    std::cout << "*notebook : " << *notebook << std::endl;

    // O endereço de 7500 pode ser acessado usando &macbook, &macintosh ou notebook 
    std::cout << "&macbook : " << &macbook << std::endl;
    std::cout << "&macintosh : " << &macintosh << std::endl;
    std::cout << "notebook : " << notebook << std::endl;

    std::cout << "\n\n";

    // As referências têm sido muito usadas principalmente em parâmetros de funções
    // quando se quer acessar e modificar o elemento que está sendo passado para aquela função

    // De certa forma, referências podem ser até mais eficientes do que ponteiros 
        // Isso porque o ponteiro (*notebook) ocupa espaço na memória, para apontar para o endereço de macbook
        // Já a referência (&macintosh) é apenas um rótulo para o endereço de memória que está macbook

    // Porém, as referências não podem ser usadas em todos os cenários que os ponteiros são usados 

    // Entretanto, nas situações em que é possível utilizar a referência, é aconselhável utilizá-la, 
    // por ser mais simples do que a utilização de ponteiros 


    double foodprice {10.00};
    
    // REFERENCES Must be initialized at declaration
    double & reference_foodprice = foodprice; // reference_foodprice é uma referência e está sendo um apelido para foodprice
            // The only way we have to reference something is through declaration. 
            // This is the reason why you can't declare a reference and not initialize.
            // Ou seja, quando se cria o apelido, é necessário dizer de quem é o apelido 

            // Além de serem construídas na inicilização, as referências não podem ser refeitas
            // Can't be changed to reference something else 


    //POINTERS can be declared un-initialized (will contain garbage addresses)
    double * pointer_foodprice; // pointer_foodprice é um ponteiro

    // ponteiros podem receber valores a qualquer momento
    pointer_foodprice = &foodprice; // pointer_foodprice recebe o endereço de foodprice

    std::cout << " pointer_foodprice  : " << pointer_foodprice << std::endl;

    // POINTERS Must go through dereference operator to read/write through pointed to value
    std::cout << " *pointer_foodprice  : " << *pointer_foodprice << std::endl;

    std::cout << "\n";

    // POINTERS Can be changed to point somewhere else : 
    double PotatoPrice {5.00};
    pointer_foodprice = &PotatoPrice; // pointer_foodprice recebe o endereço de PotatoPrice

	std::cout << " pointer_foodprice  : " << pointer_foodprice << " ----------> We get a NEW ADDRESS. In this case, we CAN make it point to somewhere else. " << std::endl; ////We made the pointer successfully point to something else.

    // POINTERS Must go through dereference operator to read/write through pointed to value
    std::cout << " *pointer_foodprice  : " << *pointer_foodprice << std::endl;





    return 0;
}
