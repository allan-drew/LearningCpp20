#include <iostream>

int main() {

    ///////////// CHECK IF A CHARACTER IS A DIGIT 

    std::cout << std::endl;
    std::cout << "std::isdigit : "<<std::endl;

    char statement[] {"Hi. How are you? I am 28 years old and 1.78m. How about you?"};
	std::cout << "statement : " << statement << std::endl;
    
    size_t digit_count{};
    
    ///// using std::isdigit 
    for(auto character : statement)
    {
        if ( std::isdigit(character) )
        {
            std::cout << "Found digit : " << character << std::endl;
            ++digit_count;
        }
    }
    std::cout << "Found " << digit_count << " digits in the statement string" << std::endl;



    return 0;
}
