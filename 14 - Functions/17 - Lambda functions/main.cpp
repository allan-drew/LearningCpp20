#include <iostream>


    ///////////// LAMBDA FUNCTION

    /// A mechanism to set up anonymous function (without names). 
    /// Once we have them set up, we can either give them names 
    // and call them, or we can even get them to do things directly. 

    
    // Lambda function signature : 
                        // [capture list] (parameters) ->return type{
                                // Function body
                            // };


int main() {


    /// Calling through a name ( in this case, func () )
    auto func = []() {
        std::cout << " HELLO WORLD! " << std::endl;
    };
    func (); ///// ==> calling through a name 
    func (); ///// ==> calling through a name AGAIN
    func (); ///// ==> calling through a name FOR THE 3X

    std::cout << std::endl;

    /// Calling directly 
    []() { 
        std::cout << " Hello World. " <<std::endl; 
    } () ;  ///// ==> calling directly 

    std::cout << std::endl;

    /// lambda function that takes parameters 
    [] ( double a , double b ) {
        std::cout << " a = " << a << " and b = " << b << std::endl; 
        std::cout << " a + b = " << ( a + b ) << std::endl;
    } ( 10.0 , 50.0 ); ///// ==> calling directly 


    std::cout << std::endl;


    /// Lambda function that takes parameters ( calling through a name )
    auto func_1 = [] ( double a , double b ) {
        std::cout << " a = " << a << " and b = " << b << std::endl;
        std::cout << " a + b = " << ( a + b ) << std::endl; 
        std::cout << std::endl;
    };
    func_1 (10 , 13);
    func_1 (12.2 , 9);


    /// Lambda function that returns something
    auto func_2 = [] ( double a , double b ) {
        return a + b;
    };
    double x = 23;
    double y = 7; 
    auto result_2 = func_2 ( x , y);
    std::cout << " x = " << x << " y = " << y << std::endl;
    std::cout << " result_2 : " << result_2 << std::endl;

    std::cout << std::endl;

    double m = 10;
    double n = 5.5;
    auto result_2_2 = func_2 ( m , n );
    std::cout << " m = " << m << " n = " << n << std::endl;
    std::cout << " result_2_2 : " << result_2_2 << std::endl;

    std::cout << std::endl;


    /// Lambda function that returns something 
    auto result = [] ( double a , double b ) {
        return a + b;
    } ( 4 , 60 );

    std::cout << " result : " << result << std::endl;


    std::cout << std::endl;


    //// Lambda function with explicitly specify the return type
    auto func_3 = [] ( double a , double b ) -> int {
        return a + b;
    };

    double a { 6.1 }; 
    double b { 1.3 };
    std::cout << " a = " << a << " and b = " << b << std::endl;


    auto result_3 = func_3 ( a , b); 
    std::cout << " result_3 = " << result_3 << " /// Return " <<  result_3 << ", because func_3 return type is int " << std::endl; //// Will return 7 ( because it's the func_3 return an int) 


    //// Lambda function with explicitly specify the return type
    auto func_4 = [] ( double a , double b ) -> double {
        return a + b;
    };

    auto result_4 = func_4 ( a , b ); 
    std::cout << " result_4 = " << result_4 << " /// Return " << result_4 << ", because func_4 return type is double " << std::endl; //// Will return 7.4

    std::cout << "sizeof(result_3) : " << sizeof(result_3) << std::endl; // 4
    std::cout << "sizeof(result_4) : " << sizeof(result_4) << std::endl; // 8


    std::cout << std::endl;
    std::cout << std::endl;



    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    ////// CAPTURE LIST 

    double a_2 {10};
    double b_2 {20};
    std::cout << " a_2 = " << a_2 << " and b_2 = " << b_2 << std::endl;

     
    auto func_5 = [ a_2 , b_2 ](){ //// set up a_2 and b_2 in our [ capture list ] to be able to use a_2 and b_2 inside the lambda function. /// Now, the body of the lambda function DOES HAVE acess to the content outside the lambda function 
         std::cout  << "a_2 + b_2 : " << a_2 + b_2 << std::endl;
    };
    func_5();

    std::cout << std::endl;
    std::cout << std::endl;



    ///////////// CAPTURING BY VALUE 
    /// What we want in the lambda function is a copy

    int c { 42 };

    auto func_6 = [c] () {
        std::cout << " Inner value : " << c << " &inner : " << &c << " ///// Inner value is always " << c << " because it's a copy " << std::endl;
        std::cout << std::endl;
    };

    std::cout << std::endl;

    for(size_t i{} ; i < 5 ;++i){
        std::cout << "      Outer value : " << c << " &outer : " << &c << std::endl;
        func_6();
        ++c;

    }

    std::cout << " --------------------------------------------------------------- " << std::endl;


    ////////// CAPTURING BY REFERENCE 
    /// Working on the original outside value

    int d { 42 };

    auto func_7 = [&d] () {
        std::cout << " Inner value : " << d << " &inner : " << &d  << std::endl; //What we have inside lambda function here is a true reference to the outside 'd' variable 
        // Because of this, Inner value and Outer value are going to be incrementing together 
        std::cout << std::endl;
    };

    std::cout << std::endl;

    for(size_t i{} ; i < 5 ;++i){
        std::cout << "      Outer value : " << d << " &outer : " << &d << std::endl;
        func_7();
        ++d;

    }   


    std::cout << " --------------------------------------------------------------- " << std::endl;


    //////// CAPTURING EVERYTHING BY VALUE 

    int e { 42 };
    int f { 32 }; 

    auto func_8 = [ = ] () { /////We put the "="" signal in the capture list
        std::cout << " Inner value : " << e << " &inner : " << &e  << std::endl; 
        std::cout << " f variable is : " << f << std::endl;
        std::cout << std::endl;
        // As we put "=" signal in the capture list, now we have acess to the variables outside the lambda function.
    };

    for(size_t i{} ; i < 5 ;++i){
        std::cout << "      Outer value : " << e << " &outer : " << &e << std::endl;
        func_8();
        ++e;

    }    


    std::cout << " --------------------------------------------------------------- " << std::endl;



    //////// CAPTURING EVERYTHING BY REFERENCE 


    int G { 42 };
    double H { 32 }; 

    auto func_9 = [ & ] () { /////We put the "&"" signal in the capture list
        std::cout << " Inner value (G) : " << G << " &inner : " << &G  << std::endl; 
        std::cout << " Inner value (H) : " << H << " &inner : " << &H  << std::endl;
        std::cout << std::endl; 

    };


    for(size_t i{} ; i < 5 ;++i){
        std::cout << "      Outer value (G) : " << G << " &outer : " << &G << std::endl;
        std::cout << "      Outer value (H) : " << H << " &outer : " << &H << std::endl;
        func_9();

        ++G;
        H+= 0.5;


    }    


    std::cout << " --------------------------------------------------------------- " << std::endl;





    std::cout << std::endl;
    std::cout << " ****** Done! ******" << std::endl;
    std::cout << std::endl;

    return 0;
}



////////////////////