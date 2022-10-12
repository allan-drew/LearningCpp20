#include <iostream>


    //Function that doesn't take parameters and returns nothing
    void say_hello(){
        std::cout << "Hello there" << std::endl;
        return; // You could omit this return statement for functions returning void
    }
    

    // /Function that takes multiple parameters and returns the result of the computation
    int max ( int a, int b){
        if( a > b)
            return a;
        else
            return b;
    }


    //Function that takes no parameters and return something
    int lucky_number(){
        return 99;
    }    



    //Parameters passed this way are scoped localy in the function.
    //Changes to them are not visible outside the function. What we
    //have inside the function are actually COPIES of the arguments
    //passed to the function.

    double increment_multiply( double a ,double b){ // What you pass to the function when you are defining it is a parameter  
        
        std::cout << "Inside function , before increment : " << std::endl;
        std::cout << "a : " << a << std::endl;
        std::cout << "b : " << b << std::endl;
        
        double result = ((++a)  * (++b));
        
        std::cout << "Inside function , after increment : " << std::endl;
        std::cout << "a : " << a << std::endl;
        std::cout << "b : " << b << std::endl;
        
        //Returning the result
        return result;
    }


int main() {


    //Calling say_hello function
    say_hello();

    std::cout << std::endl;
    std::cout << "-------------------------------------------------------" << std::endl;
    std::cout << std::endl;


    ///Calling max function 
    int a {33};
    int b {56};
    std::cout << "MAX between " << a << " and " << b << " is : " << max(a,b) << std::endl;

    ///Calling max function and store the return value in a variable and use that later on
    int a_value {15};
    int b_value {20};
    int maximum_number { max(a_value, b_value) }; 
    std::cout << "MAX between " << a_value << " and " << b_value << " is : " << maximum_number << std::endl;
    

    ///Calling max function AGAIN
    int result = max(10,34); // passing arguments
    std::cout << "MAX " << result << std::endl;


    ///Calling max function AGAIN
    int x {78};
    int y {45};
    result = max(x,y);
    std::cout << "MAX between " << x << " and " << y << " is : " << result << std::endl;


    std::cout << std::endl;
    std::cout << "-------------------------------------------------------" << std::endl;
    std::cout << std::endl;

    
    ///////Calling lucky_number 
    result = lucky_number();
    std::cout << " The lucky number is : " << result << std::endl;    

    std::cout << std::endl;
    std::cout << "-------------------------------------------------------" << std::endl;
    std::cout << std::endl;


    ///// Calling increment_multiply
    double h{3.00};
    double i{4.00};
							
	std::cout << "Outside function , before increment : " << std::endl;
	std::cout << "h : " << h << std::endl;
	std::cout << "i : " << i << std::endl;
    
    double incr_mult_result = increment_multiply(h,i); //Calling increment_multiply
    
	std::cout << "Outside function , before increment : " << std::endl;
	std::cout << "h : " << h << std::endl;
	std::cout << "i : " << i << std::endl; 

  


    return 0;
}
