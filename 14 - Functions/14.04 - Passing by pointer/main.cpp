#include <iostream>


/////////////// PASS BY POINTER /////////////

//Declaration
void say_age ( int* age ); // Passing by pointer 


int main() {

    int age {23}; 

    std::cout << " age - before we call the function : " << age << " ///// Address of age (& age) : " << &age << std::endl;

    std::cout << std::endl;

    say_age (&age); 
        //When you call a function that passes by pointer, you have to give it an address using "&" . 
        // We are passing the address of our age variable, 
        // which is going to be passed by pointer. 

    std::cout << std::endl;

    std::cout << " age - after we called the function : " << age << " ///// Address of age (& age) : " << &age << std::endl;

    std::cout << std::endl;

    return 0;
}


//Definition
void say_age ( int* age ) { // Passing by pointer 

    //When we pass by pointer we want to be modifying a copy inside the body of our function 

    ++(*age);
    std::cout << " Hello! You are ... " << *age << " years old. " << " ///// Address of age (& age) : " << &age << std::endl;

}