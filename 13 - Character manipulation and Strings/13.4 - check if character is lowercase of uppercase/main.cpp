#include <iostream>

int main() {

    ///////////// CHECK IF CHARACTER IS LOWERCASE OR UPPERCASE 

    std::cout << "std::islower and std::isupper : "<<std::endl;
    std::cout << std::endl;

    char thought[] {"The C++ Programming Language is one of the most used on the Planet"};

    size_t lowercase_count{};
    size_t upppercase_count{};
    
    //Print original string for ease of comparison on the terminal
    std::cout << "Original string  : " << thought << std::endl;

    std::cout << std::endl;

    
    std::cout << " Lowercase ===> " << std::endl;

    for( auto character : thought)
    {
        if(std::islower(character))
        {
            std::cout << " " << character;
            ++lowercase_count;
        }  
    }

    std::cout << std::endl;
    std::cout << std::endl;


    std::cout << " Uppercase ===> " << std::endl;
    for (auto character : thought) 
    {
        if (std::isupper(character))
        {
            std::cout << " " << character;
            ++upppercase_count;
        }
    }


    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "Found " << lowercase_count << " lowercase characters and "
                <<upppercase_count << " uppercase characters."<<  std::endl;

    std::cout << std::endl;






    return 0;
}
