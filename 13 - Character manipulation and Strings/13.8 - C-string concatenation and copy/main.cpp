#include <iostream>
#include <cstring>


int main() {

    //////////////////////////// C-STRING CONCATENATION AND COPY ///////////////////

// =============================================================================================
	//Concatenation
	std::cout<< "std::strcat : " << std::endl;
	//doc : https://en.cppreference.com/w/cpp/string/byte/strcat
	
	char dest[50] = "Hello ";
    char src[50] = "World!";

    std::strcat(dest, src); // Some compilers (MSVC) think these functions are unsafe!
    std::cout << "dest : " << dest << std::endl; // Hello World

    std::strcat(dest, " Goodbye World!"); 
    std::cout << "dest : " << dest << std::endl; // Hello World Goodbye World!
// =============================================================================================


std::cout << std::endl;
std::cout << std::endl;


// =============================================================================================
	//More concatenation
	std::cout << "More std::strcat : " << std::endl;
	
    char *dest1 = new char[30]{'F','i','r','e','l','o','r','d','\0'};
    char *source1 = new char[30]{',','T','h','e',' ','P','h','e','n','i','x',' ','K','i','n','g','!','\0'};
		
	//NOTE TO SELF : 
			//Describe what's going to happen in std::strcat before you do the cat :
			//source is going to be appended to dest, and the process
			//will start by overriding the null character in dest
			
    std::cout << "std::strlen(dest1) :" << std::strlen(dest1) << std::endl;
    std::cout << "std::strlen(source1) : " << std::strlen(source1) << std::endl;
    
	std::cout << "Concatenating..." << std::endl;
    std::strcat(dest1,source1);
    
    std::cout << "std::strlen(dest1) :" << std::strlen(dest1) << std::endl;
    std::cout << "dest1 : " << dest1 << std::endl;
// =============================================================================================


std::cout << std::endl;
std::cout << std::endl;


// =============================================================================================
    // Concatenates n characters 

    //std::strncat  : concatenates n characters from src to dest and
            //returns a pointer to the result string
            //signature : char *strncat( char *dest, const char *src, std::size_t count );
    
    std::cout << "std::strncat:" << std::endl;
    char dest2[50] { "Hello!" };
    char source2[30] = {" There is a bird on my window"};
    
    std::strncat(dest2, source2, 15);
    std::cout << "The concatenated string is : " << dest2 << std::endl;
// =============================================================================================


std::cout << std::endl;
std::cout << std::endl;



// =============================================================================================
    // Copying strings
    // std::strcpy - signature : char* strcpy( char* dest, const char* src );
 
    std::cout << std::endl;
    std::cout << " ********** Copying strings (std::strcpy) ********** " << std::endl;
    std::cout << std::endl;

    const char* source3 = "C++ is a multipurpose programming language.";
    std::cout << "source3 : " << source3 << std::endl;

    char *dest3 = new char[std::strlen(source3) + 1];// +1 for the null character
													//Contains garbage data
													//Not initialized
    // std::strcpy
    std::strcpy(dest3,source3);
    
    std::cout << "      sizeof(dest3) : " << sizeof(dest3) << std::endl;
    std::cout << "      std::strlen(dest3) : " << std::strlen(dest3) << std::endl;
    std::cout << "dest3 : " << dest3 << std::endl;
// =============================================================================================


std::cout << std::endl;
std::cout << std::endl;


// =============================================================================================
    // Copy n characters 

    //std::strncpy : Copy n characters from src to dest -
    //signature : char *strncpy( char *dest, const char *src, std::size_t count );

    std::cout << "Copy n characters (std::strncpy) :" << std::endl;

    const char* source4 = "Hello";
    char dest4[] = {'a', 'b', 'c', 'd', 'e', 'f','\0'}; // Have to put the terminating
														//null char if we want to print
    
    std::cout << "  sourcer4 : " << source4 << std::endl;
    std::cout << "  dest4 : " << dest4 << std::endl;
    
	std::cout << "Copying..." << std::endl;

    // std::strncpy
    std::strncpy(dest4,source4,5);
    
    std::cout << "  dest4 : " << dest4 << std::endl;
// =============================================================================================





    return 0;
}
