#include <iostream>


//////////////////// FUNCTIONS DECLARATIONS AND DEFINITIONS ////////////////////////

// Sometimes it's more flexible to split the function into it's header and body 
// and keep the code for each in different places. 
// Much easier to work and read.


////// Function Prototype (Declaration) :

// The prototype needs to come BEFORE the function call in your file. Otherwise the compilation will fail. 
// Signature doesn't include return type

int max ( int a , int b ); /// Function HEADER (declaration) ///

int min ( int a , int b ); /// Function HEADER (declaration) ///

int inc_mult ( int a , int b ); /// Function HEADER (declaration) ///

// The function header (declaration) doesn't care about the variable names. 
// So, the names of the variables AREN'T really important in function declarations 

// Example:
int sum_two_numbers ( int , int ); // We can TAKE OUT our variable names (a and b) in our function declarations 


int main() {

    int a{3};
    int b{4};

    std::cout << " The maximum is :  " << max (a,b) << std::endl;
    std::cout << " The minimum is : " << min (a,b) << std::endl;

    std::cout << " ------------------------------------------------- " << std::endl;


    int x {2};
    int y {5};

    int result = max (x,y);
    std::cout << " The maximum between " << x << " and " << y << " is : " << result << std::endl;

    result = min (x,y);
    std::cout << " The minimum between " << x << " and " << y << " is : " << result << std::endl;

    std::cout << " ------------------------------------------------- " << std::endl;

    result = inc_mult (x,y);
    std::cout << " The 'inc mult' between " << x << " and " << y << " is : " << result << " ------ > (x+1) * (y+1) " << std::endl;

    std::cout << " ------------------------------------------------- " << std::endl;

    result = sum_two_numbers (x,y);
    std::cout << " The SUM between " << x << " and " << y << " is : " << result << std::endl;


    return 0;
}


////// Function Definition or implementation : 
    int max ( int a , int b) {  /// Function BODY (Definition or implementation)
        if (a > b)
            return a;
        else
            return b;
    }


////// Function Definition or implementation : 
    int min ( int a , int b) {  /// Function BODY (Definition or implementation)
        if (a < b)
            return a;
        else
            return b;
    }


////// Function Definition or implementation : 
    int inc_mult ( int a , int b ) {  /// Function HEADER (declaration) ///
        
        return ( ( ++a ) * ( ++b ) );

    } 


///// Function that sum two numbers
    int sum_two_numbers ( int a, int b) {
        return a + b;
    }


