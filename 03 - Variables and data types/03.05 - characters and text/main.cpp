#include <iostream>

int main() {


////////////// CHARACTERS AND TEXT ///////////////////

    // ASCII was among the first encodings to represent text in a computer.
    char value = 65; //ASCII code for 'A'
    std::cout << "VALUE : " << value << " // VALUE (INT) : " << static_cast<int>(value) <<std::endl;

    char value2 = 97; //ASCII code for 'a'
    std::cout << "VALUE : " << value2 << " // VALUE (INT) : " << static_cast<int>(value2) <<std::endl; //TURN INTO A INT

    char value3 = 126; //ASCII code for '~'
    std::cout << value3 << std::endl;

    char value4 = 47; //ASCII code for '/'
    std::cout << value4 << std::endl;


    ///////
    char char_1 {'f'};
    char char_2 = 'g';

    std::cout << char_1 << std::endl;
    std::cout << char_2 << std::endl;


    return 0;
}
