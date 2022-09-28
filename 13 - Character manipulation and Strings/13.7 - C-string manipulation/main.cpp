#include <iostream>
#include <cstring> //needed to use std::strleg; std::strchar; std::strrchr


int main() {

    ///////////////////////////////// C-STRING MANIPULATION ///////////////////

// =================================================================================================
    ///////// std::strlen : Find the length of a string

    const char message1 [] { "The sky is blue." };
    std::cout << " message 1 : " << message1 << std::endl;

    // strlen ignores null character
    std::cout << "strlen(message1)" << std::strlen(message1) << std::endl;

    // Includes the null character
    std::cout << "sizeof(message1)" << sizeof(message1) << std::endl;
    std::cout << std::endl;
// =================================================================================================


    // Aarray decays into pointer when we use const char *
    const char * message2 { "The sky is blue." };
    std::cout << " message 2 : " << message2 << std::endl;

    // strlen still works with decayed arrays
    std::cout << "strlen(message2)" << std::strlen(message2) << std::endl;

    // Prints size of pointer
    std::cout << "sizeof(message2)" << sizeof(message2) << std::endl;
    std::cout << std::endl;

// =================================================================================================



// =================================================================================================

    ///////// std::strchar : Find the first occurrence of a character 

    std::cout << "std::strchr : " << std::endl;
	//doc : https://en.cppreference.com/w/cpp/string/byte/strchr
    
	//we use std::strchr to find all the characters one by one.
	const char * const str { "Try not. Do, or do not. There is no try."};
    //Can make this a const pointer to prevent users from making it point somewhere else

    std::cout << " MESSAGE : " << str << std::endl; 

	char target = 'o';
	const char *result = str;
	size_t iterations{};
	
 
	while ((result = std::strchr(result, target)) != nullptr) 
    {
		std::cout << "Found '" << target
				<< "' starting at '" << result << "'\n";
 
		// Increment result, otherwise we'll find target at the same location
		++result;
		++iterations;
	}
	std::cout << "iterations : " << iterations << std::endl;
    std::cout << std::endl;

// =================================================================================================


// =================================================================================================
	//Find last occurence

    std::cout << "std::strrchr : " << std::endl;
	//doc : https://en.cppreference.com/w/cpp/string/byte/strrchr
	
    char input[] = "/home/user/hello.cpp";

    // Will search in /home/user/hello.cpp the last '/' occurence
    char* output = std::strrchr(input, '/');

    if(output)
    {
        std::cout << output << std::endl; 
    }   

    // Or...
    // If we want to start printing different
    if (output)
    {
        std::cout << output + 1 << std::endl;
    }


// =================================================================================================





    return 0;
}
