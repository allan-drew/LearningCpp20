#include <iostream>

#include <string>

//////// GETTING THINGS OUT OF FUNCTIONS //////////////

//////// RETURNING FROM FUNCTIONS (DEFAULT IS RETURNING FROM FUNCTIONS BY VALUE)
// It's a alternative to the last example 


int sum ( int a , int b) {

    int result = a + b;
    std::cout << " In : &result(int) : " << &result << std::endl;
    return result; // This variable is local to this function 
                // and it will be destroyed when we hit the end of the function "}" below 

    // We are going to be COPYING whatever return in 'return result;' here, 
    // and store a COPY of that in the 'result' variable of the main function below 

}




int main () {

    int x {10};
    int y {5};
    int result = sum (x,y); 
        /// This 'result' variable is DIFFERENT from de 'result' variable that we have in the 'sum' function 
        /// The result variable here is local to the main function

    std::cout << std::endl;    

    std::cout << " Out : &result(int) :  " << &result << std::endl;

    std::cout << std::endl;

    std::cout << " x is : " << x << std::endl;
    std::cout << " y is : " << y << std::endl;    
    std::cout << " result : " << result << std::endl;

    std::cout << std::endl;   
    std::cout << "              We printed 2 different address. This prove that we are returning a COPY. It's not the original variable that we have in the sum function. " << std::endl;
    std::cout << "              We are using return mechanism to get data outside the function. " << std::endl;

    std::cout << std::endl;
    
    std::cout << " ---------------------------------------------------------------------------------------------------- " << std::endl;
   


    int x_2 {30};
    int y_2 {10};
    int result_of_sum = sum (x_2,y_2);

    std::cout << std::endl;

    std::cout << " Out : &result_of_sum(int) :  " << &result_of_sum << std::endl;

    std::cout << std::endl;

    std::cout << " x_2 is : " << x_2 << std::endl;
    std::cout << " y_2 is : " << y_2 << std::endl;      

    std::cout << " result_of_sum : " << result_of_sum << std::endl;
    



    return 0;
} 

