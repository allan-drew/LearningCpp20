#include <iostream>


/////////////// PASSING BY REFERENCE /////////////
//Declaration
void say_age_after_OneYear ( int & ageOfPerson ); // Passing by reference 
                    // 'ageOfPerson' é um apelido para 'age' que está dentro da função main.       
////////////// 


/////////////// PASSING BY VALUE /////////////
// Passagem por valor / Passagem por cópia
void say_height_after_GrowingUp ( float heightOfPerson ); // Passing by value
////////////



int main() {

    //////////// REFERENCES AND FUNCTIONS ///////////////////////////////////

/////////////// PASSING BY REFERENCE /////////////

    std::cout << "\n";
    std::cout << " Example ========= PASSING BY REFERENCE ========== \n";
    std::cout << " == Evita copia de grande volume de informacoes pois passa o endereco e conseguimos modificar os dados originais ==  \n\n";

    int age {23}; 

    std::cout << " age - before we call the function : " << age << " ///// Address of age (& age) : " << &age << std::endl;

    say_age_after_OneYear (age);

    std::cout << " age - after we called the function : " << age << " ///// Address of age (& age) : " << &age << std::endl;


    std::cout << "\n";
    std::cout << " ==================================================================== \n";
    std::cout << "\n";



/////////////// PASSING BY VALUE /////////////

    std::cout << " Example ========= PASSING BY VALUE ========== \n";
    std::cout << " == Faz copia de grande volume de informacoes e NAO conseguimos modificar os dados originais ==  \n\n";

    float height { 1.79 };

    std::cout << " height - before we call the function : " << height << " ///// Address of height (& height) : " << &height << std::endl;

    say_height_after_GrowingUp (height);

    std::cout << " height - after we called the function : " << height << " ///// Address of height (& height) : " << &height << std::endl; 



    std::cout << "\n";
    std::cout << "\n";


    return 0;
}


//Definition
void say_age_after_OneYear ( int & ageOfPerson ) { // Passing by reference  
        ++(ageOfPerson);
        std::cout << ageOfPerson << " years old. \n";
}


//Definition 
void say_height_after_GrowingUp ( float heightOfPerson ) {

    heightOfPerson = heightOfPerson + 0.05;
    std::cout << " say_height_after_GrowingUp ( float heightOfPerson ) ===> Hello, you grow up! You are ... " << heightOfPerson << " m \n";
}


