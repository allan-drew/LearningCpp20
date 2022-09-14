#include <iostream>

    //////// POINTER AND FUNCTIONS /////////////

    // Um dos principais usos dos ponteiros é que eles são usados em parâmetros de funções 
        // Evita cópia de um grande volume de informações
        // Pode ser usado para modificar os dados originais 


/////////////// PASSING BY POINTER /////////////
//Declaration
void say_age_after_OneYear ( int * ageOfPerson ); // Passing by pointer 
////////////// 


/////////////// PASSING BY VALUE /////////////
void say_height_after_GrowingUp ( float heightOfPerson ); // Passing by value
////////////



int main () {

// ===============================================================================================================
    std::cout << "\n";
    std::cout << " Example ========= PASSING BY POINTER ========== \n";
    std::cout << " == Evita copia de grande volume de informacoes pois passa o endereco e conseguimos modificar os dados originais ==  \n\n";

    int age {23}; 

    std::cout << " age - before we call the function : " << age << " ///// Address of age (& age) : " << &age << std::endl;

    //When you call a function that passes by pointer, you have to give it an address using "&" .
    //We are passing the address of out age variable, which is going to be passed by pointer. 
    say_age_after_OneYear (&age);
    // Ao passar o endereço de age (&age), recebemos a age na função através de um ponteiro
    // A função say_age_after_OneYear está recebendo um ponteiro para a age

    std::cout << " age - after we called the function : " << age << " ///// Address of age (& age) : " << &age << std::endl;

    // Além de evitar cópia de um grande volume de informacoes caso estivessemos usando structs por exemplo, ao usar ponteiros também conseguimos modificar os dados originais.  \n";


    std::cout << "\n";
// ==============================================================================================================
    std::cout << " ==================================================================== \n";
    std::cout << "\n";


    std::cout << " Example ========= PASSING BY VALUE ========== \n";
    std::cout << " == Faz copia de grande volume de informacoes e NAO conseguimos modificar os dados originais ==  \n\n";

    float height { 1.79 };

    std::cout << " height - before we call the function : " << height << " ///// Address of height (& height) : " << &height << std::endl; //Whe we manipulate 'height' in say_height_after_GrowingUp function, it has no effect on this age variable in this code 

    say_height_after_GrowingUp (height); // The function receives only a copy of the value of the variable being used in the function call. 
        /// What you pass when you are calling a function is an ARGUMENT. 
        //We take a copy of the value inside the height (inside main function) and put inside height of the say_height_after_GrowingUp function. 
        // It's just a copy. It's not the original value. 

    std::cout << " height - after we called the function : " << height << " ///// Address of height (& height) : " << &height << std::endl; //Whe we manipulate 'height' in say_height_after_GrowingUp function, it has no effect on this height variable in this code 




    std::cout << " \n\n ";
    return 0;
}


//Definition
void say_age_after_OneYear ( int* ageOfPerson ) { // Passing by pointer 
        //When we pass by pointer we want to be modifying a copy inside the body of our function 
        ++(*ageOfPerson);
        std::cout << " say_age_after_OneYear ( int* ageOfPerson ) ===> Happy Birthday! You are ... " << *ageOfPerson << " years old. \n";
}


//Definition 
void say_height_after_GrowingUp ( float heightOfPerson ) {
    // What you are working on in the body of the function when it's called is going to be a copy of what you have passed as argument when you was called inside the main function
    heightOfPerson = heightOfPerson + 0.05;
    std::cout << " say_height_after_GrowingUp ( float heightOfPerson ) ===> Hello, you grow up! You are ... " << heightOfPerson << " m \n";
}

