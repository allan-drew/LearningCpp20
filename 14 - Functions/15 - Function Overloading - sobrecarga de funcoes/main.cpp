#include <iostream>


    ///////////////// FUNCTION OVERLOADING ////////////////
    // It's a mechanism to have multiple copies of 
    // the same function, but taking different parameters 

    // Overloads are a mechanism in C++ to set up multiple functions 
    // with the SAME NAME to make our code easier to work with 

    /// Parameter differences : order , number , types 


    ////// OVERLOADING WITH DIFFERENT PARAMETERS 


    //// max functions : 

    /// If we try to call max function with integers, this function will be called 
    int max(int a, int b){

        std::cout << "int overload called" << std::endl;
        return (a>b)? a : b;  /////return type => int 

    }


    /// If we try to call max function with double, this function will be called 
    double max(double a, double b){ /// Cannot overload functions distinguished only by return. So, we needed to change int a and int b to double a and double b

        std::cout << "double overload called" << std::endl;
        return (a>b)? a : b; 

    }


    //// We can also combine int and double. 
    double max ( double a , int b ) { ///When we use sintax like this, we need to put in this same sequence when we call the function in the main function below. So, we are going to put double first and then int 

        std::cout << "(double,int) overload called" << std::endl;
        return (a>b)? a : b; 
    
    }



int main() {

    std::cout << std::endl; 

    int x{4};
    int y{9};
    auto result = max (x,y); //// In this case, we called int overload.
    std::cout << " x is: " << x  << " ///  " << " y is : " << y << std::endl; 
    std::cout << " max result is : " << result << std::endl; 


    std::cout << std::endl; 


    double a {2.7};
    double b {10.3};
    auto result_2 = max (a,b); ///// In this case, we called double overload
    std::cout << " a is: " << a  << " ///  " << " b is : " << b << std::endl; 
    std::cout << " max result_2 is : " << result_2 << std::endl; 


    std::cout << std::endl; 


    auto result_3 = max ( a , x ); ///// We put double a and int x. So, we are calling "double max ( double a , int b )" function.   
    std::cout << " a is: " << a  << " ///  " << " x is : " << x << std::endl; 
    std::cout << " max result_3 is : " << result_3 << std::endl; 



    return 0;
}




/////////