#include <iostream>

int main() {

    /////////////// CHECK IF CHARACTER IS BLANK 

    std::cout << std::endl;
    std::cout << "std::isblank : "<<std::endl;

    char message[] {"Hello there. How are you doing? The sun is shining."};
    std::cout << "message : " << message << std::endl;
    
    //Find and print blank index
    size_t blank_count{};

    for (size_t i{0} ; i < std::size(message); ++i)
    {
        //std::cout << "Value : " << message[i] << std::endl;

        //// using std::isblank
        if ( std::isblank(message[i]) )
        {
            std::cout << "Found a blank character at index : [" << i << "]" << std::endl;
            ++blank_count;
        }

    }

    std::cout << "We found " << blank_count << " blank characters in total."<< std::endl;


    return 0;
}
