#include <iostream>


void enterIntoClub(size_t age) // What you pass to the function when you are defining it is a parameter
{   
    if (age >= 18) 
    {
            std::cout << "You're " << age << " years old. Please proceed." << std::endl; 
    } else {
            std::cout << "You're " << age << ". Sorry, you're too young for this. No offense! " << std::endl;
    }
    
    return ;
}

int main() {

    ////////////////////////////////// FUNCTION ///////////////////////

    // FUNCTION : A reusable piece of code that can take a number of optional inputs and produce some desirable output 

/*
    How a function looks in C++ : 

        return_type function_name (parameter1, parameter2,...) {
            Processing
            return return_type; 
        }

    void ==> means that the functon is not going to return anything. Basically it means "nothing" or "no type"

*/

    enterIntoClub ( 25 );
    enterIntoClub ( 15 );


    return 0;
}
