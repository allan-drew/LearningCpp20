#include <iostream>

int main() {

    //////////////// CHECK IF CHARACTER IS ALPHABETIC 

    std::cout << std::endl;
    std::cout << "std::isalpha : "<<std::endl;

    ///// using std::isaplha
    std::cout <<   "C is alphabetic : " << std::isalpha('C') << std::endl; // 1
    std::cout <<   "^ is alphabetic : " << std::isalpha('^') << std::endl; // 0
    std::cout <<   "7 is alphabetic : " << std::isalpha('7') << std::endl; // 0

    std::cout << std::endl;

    if (std::isalpha('e')) 
    {
        std::cout << 'e' << " is alphabetic" << std::endl;
    } else
    {
        std::cout << 'e' << " is NOT alphabetic" << std::endl;        
    }    


    return 0;
}
