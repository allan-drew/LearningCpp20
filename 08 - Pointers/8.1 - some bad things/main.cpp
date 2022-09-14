#include <iostream>

int main() {

    ///////// BAD THINGS TO DO //////////////

    //Writing into uninitialized pointer through dereference
    // Program will CRASH !!! 
    // Don't use dereferencing memory that you haven't initialize

/*
	int *p_number2; // Contains junk address : could be anything
    std::cout << "Writting in the 55" << std::endl;
	*p_number2 = 55; // Writing into junk address : BAD!
	std::cout << std::endl;
	std::cout << "Writing into uninitialized pointer through dereference" << std::endl;
	std::cout << "p_number2 : " << p_number2 << std::endl; // Reading from junk address.
    std::cout << "Dereferencing bad memory" << std::endl;
	std::cout << "*p_number2 : " << *p_number2 << std::endl;
*/



    // Another BAD THING!
/* 
	//int *p_number3{nullptr}; // Also works
	int * p_number3 {}; // Initialized with pointer equivalent of zero : nullptr
						// A pointer pointing nowhere
    std::cout << "Writting into nullptr memory" << std::endl;
	*p_number3 = 33; // Writting into a pointer pointing nowhere : BAD, CRASH
    std::cout << "Done writting" << std::endl;
	
	std::cout << std::endl;
	std::cout << "Reading and writting through nullptr : " << std::endl;
	//std::cout << "p_number3 : " << p_number3 << std::endl;
	//std::cout << "*p_number3 : " << *p_number3 << std::endl;// Reading from nullptr
*/


    //////// CAN'T cross assign between pointers of different types
/*
    double double_var{33};
    int *p_int1{nullptr};

    p_int = &double_var; // Compiler error
*/

    return 0;
}
