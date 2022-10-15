#include <iostream>


#include <concepts>

//// Concepts : A mechanism to place constraints/restrictions on your template type parameters 

// Concepts are an extension to the templates feature provided by the C++ programming language. (wikipedia)

//  A concept may be associated with a template (class template, function template, or member function of a class template), in which case it serves as a constraint: it limits the set of arguments that are accepted as template parameters. (wikipedia)


//////////////////////////// STANDARD BUILT IN CONCEPTS /////////////////////////////// 

//Syntax1
/*
    template <typename T>
    requires std::integral<T>
    T add( T a, T b){
        return a + b;
    }
*/

//Syntax2
/*
    template <std::integral T>
    T add( T a, T b){
        return a + b;
    }
*/

//Syntax3
    /*
    auto add(std::integral auto a , std::integral auto b){
        return a + b;
    }
*/

//Syntax4
template <typename T>
T add( T a, T b) requires std::integral<T>{ 
        ///We set intergal type limit to set arguments that are accepted as template parameters. 
        /// Integral types : n integral type can declare: Integer values, signed or unsigned; Boolean values; Characters; Members of an enumerated type; Bit fields

    return a + b;
}


/////////////////////////////////////////////////////////////////////////////////////////

//////////////////////////// BUILDING YOUR OWN CONCEPTS ////////////////////////////////

////////////////////////////////
template <typename T>
concept Multipliable = requires ( T a , T b) {
    a * b; /// This just make sure that the syntax is valid. 
    // For example : If we call a function template with this concept and try to pass integers, 
    //it's going to work, because it's possible to multiply integers. 

    // BUT, if we call a function template with this concept and try to pass two strings, 
    // it's going to FAIL, because doesn't make sense to multiply strings 
}; 

template <typename T>
requires Multipliable<T>
T mult_1  (T a, T b){
    return a * b;
}
////////////////////////////////



/////////////////////////////////
template <typename T>
concept MyIntegral = std::is_integral_v<T>;

MyIntegral auto add_2 ( MyIntegral auto a, MyIntegral auto b) {
    return a + b;
}
////////////////////////////////



//////////////////////////////////
template <typename T>
concept Incrementable = requires (T a) {
	a+=1;
	++a;
	a++;
};

template <typename T>
requires Incrementable<T>
T add_3 (T a, T b){
    return a + b;
}
////////////////////////////////



/////////////////////////////////////////////////////////////////////////////////////////



int main() {

    /////////////////////////////////////////////////////////////////////////////////////
	char a_0{10};
	char a_1{20};
	
	auto result_a = add(a_0,a_1);
    std::cout << " Calling add (Syntax4 / STANDARD BUILT IN CONCEPTS ): " << std::endl;
    std::cout << " a_0 is " << a_0 << " and a_1 is " << a_1 << std::endl;
	std::cout << "result_a : " << static_cast<int>(result_a) << std::endl;
    std::cout << std::endl;

	
	int b_0{11};
	int b_1{5};
	auto result_b = add(b_0,b_1);

    std::cout << " Calling add (Syntax4 / STANDARD BUILT IN CONCEPTS ): " << std::endl;
    std::cout << " b_0 is " << b_0 << " and b_1 is " << b_1 << std::endl;
	std::cout << "result_b : " << result_b << std::endl;
    std::cout << std::endl;


    ///// Compiler error : required for the satisfaction of 'integral<T>' [with T = double]
    //// concept integral = is_integral_v<_Tp>;
	// double c_0 {11.1};
	// double c_1 {1.9};
	// auto result_c = add(c_0,c_1);
    // std::cout << "result_c : " << result_c << std::endl;


    /////////////////////////////////////////////////////////////////////////////////////////

    ////////
    int x_0 { 4 };
    int y_0 { 2 };
    auto result_2 = mult_1 ( x_0 , y_0);
    std::cout << " Calling mult_1 ( BUILDING YOUR OWN CONCEPTS ): " << std::endl;
    std::cout << " x_0 is " << x_0 << " and y_0 is " << y_0 << std::endl;
    std::cout << "result_2 : " << result_2 << std::endl;
    std::cout << std::endl;
    /////////



    ////// 
    int x{6};
    int y{7};
    auto result_3 = add_2(x,y);
    std::cout << " Calling add_2 ( BUILDING YOUR OWN CONCEPTS ): " << std::endl;
     std::cout << " x is " << x << " and y is " << y << std::endl;
    std::cout << "result_3 : " << result_3 << std::endl;
    std::cout << std::endl;

    //////// 


    double i {10};
    double j {70};
    auto result_4 = add_3( i , j );
    std::cout << " Calling add_3 ( BUILDING YOUR OWN CONCEPTS ): " << std::endl;
    std::cout << " i is " << i << " and j is " << j << std::endl;
    std::cout << "result_4 : " << result_4 << std::endl;
    std::cout << std::endl;

    /////////////////////////////////////////////////////////////////////////////////////////






    std::cout << "Done!" << std::endl;

    return 0;
}
