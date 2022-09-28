#include <iostream>

int main() {

    //////////// CHECK IF CHARACTER IS ALPHANUMERIC

    std::cout << std::endl;
    std::cout << "std::isalnum : "<< std::endl;
	
    //////// using std::isalnum
    std::cout << "C is alphanumeric : " << std::isalnum('C') << std::endl;
    std::cout << "^ is alphanumeric : " << std::isalnum('^') << std::endl;
  
    std::cout << std::endl;

	//Can use this as a test condition
	char input_char {'*'};

	if(std::isalnum(input_char))
    {
		std::cout << input_char << " is alhpanumeric." << std::endl;
	} else
    {
		std::cout << input_char <<  " is not alphanumeric." << std::endl;
	}   



    return 0;
}
