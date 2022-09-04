#include <iostream>

int main() {

    ////////// ARRAYS OF CHARACTERS //////////////////////

// =========================================================================================================
    /////////////// Printing out the array through looping
    char message [5] {'H', 'e', 'l', 'l', 'o'};

    std::cout << "message : "; 

    for (auto c : message) {
        std::cout << c;
    }

    std::cout << std::endl; 

        ///////////////Change characters in our array 
        message[1] = 'a';

        std::cout << "message (i = 1 modified): "; 

        for (auto c : message) {
            std::cout << c;
        }

        std::cout << std::endl; 
        std::cout << std::endl; 
//===========================================================================================================

    ////////////////// Printing out some GARBAGE, because doesn't null terminated ( \0 ). 
    char message_2 [5] {'H', 'e', 'l', 'l', 'o'};
    std::cout << "message_2 (Printing out some GARBAGE): " << message_2 << std::endl; 
    
    std::cout << std::endl; 

//===========================================================================================================

    //////////// If a character array is null terminated (\0 ), it's called as C-String
    char message_3 [] {'H','e','l','l','o','\0'};
    std::cout << "message_3 : " << message_3 << std::endl;

    std::cout << std::endl; 

//===========================================================================================================

    ////////// STRING LITERAL

    char message_4 [] { "HELLO"};
    std::cout << " message_4 : " << message_4 << std::endl;
    std::cout << "      C++ will add a null terminated. This is because we don't have size 5 => sizeof(message_4) : " << sizeof(message_4) << std::endl;
    std::cout << "      We have size 6." << std::endl;
    std::cout << "      H-1; E-2; L-3; L-4; O-5; -6 ---> " << sizeof(message_4) << std::endl;


    std::cout << "------------------------------------------------------" << std::endl;

    char message_5 [] { "HELLO WORLD, HOW ARE YOU DOING?"};
    std::cout << " message_5 : " << message_5 << std::endl;

    std::cout << std::endl; 

//===========================================================================================================

    /////////// CAN'T safely print out arrays other than those of characters

    int numbers [] {1,2,3,4,5}; // int (not character)
    std::cout << "numbers :  " << numbers << std::endl;

    /// But we can use range based for loop
    for (auto i : numbers) {
        std::cout << i;
    }


    return 0;
}
