#include <iostream>


/////////////// PASS BY VALUE /////////////
// Passing parameters to a function by value 

// Passagem de parâmetros por valor: Função chamada recebe uma CÓPIA 
// do valor da variável usada como argumento na chamada da função. 


//Declaration
void say_age ( int age ); //What you pass when you declaring a function is a PARAMETER 


int main() {

    int age {23}; 
        //This variable 'age' is not the same of the 'age' outside de main function. 
        // Although they have the same name, they are not in the same memory location. 

    std::cout << " age - before we call the function : " << age << " ///// Address of age (& age) : " << &age << std::endl; //Whe we manipulate 'age' in say_age function, it has no effect on this age variable in this code 

    std::cout << std::endl;

    say_age (age); 
        // The function receives only a copy of the value of the variable being used in the function call. 
        /// What you pass when you are calling a function is an ARGUMENT. 
        //We take a COPY of the value inside the age (inside main function) and put inside age of the say_age function. 
        // It's just a copy. It's not the original value. 
        // It has a DIFFERENT Address as we see when we run the code

    std::cout << std::endl;


    std::cout << " age - after we called the function : " << age << " ///// Address of age (& age) : " << &age << std::endl; //Whe we manipulate 'age' in say_age function, it has no effect on this age variable in this code 

    std::cout << std::endl;


    return 0;
}

//Definition
void say_age ( int age ) { //What you pass when you declaring a function is a PARAMETER 
    // What you are working on in the body of the function when it's called 
    // is going to be a copy of what you have passed as argument 
    // when you was called inside the main function

    ++age;
    std::cout << " Hello! You are ... " << age << " years old. " << " ///// Address of age (& age) : " << &age << std::endl;

}