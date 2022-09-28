#include <iostream>

int main() {


    /////////// TURNING A CHARACTER TO LOWERCASE AND UPPERCASE

    std::cout << std::endl;
    std::cout << "std::tolower and std::toupper: " << std::endl;

    char original_str[] {"Hi. How are you? This is a simple example about how to turning a character to lowercase and uppercase."};

    std::cout << "Original string : " << original_str << std::endl;

    char dest_str[std::size(original_str)];

    //Turn this to uppercase. Change the array in place
    // std::toupper
    for (size_t i{}; i < std::size(original_str) ; ++i) 
    {
        dest_str[i] = std::toupper(original_str[i]);
    }
    
    std::cout << "Uppercase string : " << dest_str << std::endl;
    
//////////////////////////////

    //Turn this to lowercase. Change the array in place
    //std::tolower
    for(size_t i{}; i < std::size(original_str) ; ++i){
        dest_str[i] = std::tolower(original_str[i]);
    }
    
    std::cout << "Lowercase string : " << dest_str << std::endl; 




    return 0;
}
