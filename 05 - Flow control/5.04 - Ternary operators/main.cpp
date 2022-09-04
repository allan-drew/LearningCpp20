#include <iostream>

int main() {

    ////////// TERNARY OPERATORS //////////////////


    //nt max { };
    
    int a{ 350 };
    int b{ 200 };
    
    //// result = (condition) ? option1 : option2; 
    int max = (a > b)? a : b; // Ternary operator
    std::cout << "  max between " << a << " and " << b << " is : " <<  max << std::endl;
	
    ///////////// EQUIVALENT VERSION USING "IF"
    std::cout << std::endl;
    std::cout << "using regular if : " << std::endl;
    if(a >  b) {
        max = a;
    } else {
        max = b;
    }
    std::cout << "  max between " << a << " and " << b << " is : " <<  max << std::endl;
    

    /////////// Making TERNARY INITIALIZATION //////////
    std::cout << "----------------" << std::endl;
    std::cout << "Temperature" << std::endl;
    bool hot = true; 

    int temperature { hot ? 104 : 59 }; // If hot, initialize with 300; If not hot, initialize with 150
    std::cout << "  The temperature is : " << temperature << " Fahrenheit " << std::endl;


    return 0;
}
