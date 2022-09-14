#include <iostream>

int main() {

    //boolalpha and noboolapha : control bool output format : 1/0 or true/false
    
    bool condition {true};
    bool other_condition {false};
    
    std::cout << "Default (1 or 0): " << std::endl; 
    std::cout << "  condition : " << condition << std::endl; //DEFAULT : will print 1 
    std::cout << "  other_condition : " << other_condition << std::endl; //DEFAULT : will print 0
    
    std::cout << std::endl;

    std::cout << std::boolalpha; // boolalpha : will print TRUE or FALSE 
    std::cout << "Enable boolalpha ( TRUE or FALSE  ===> std::boolalpha ): " << std::endl; 
    std::cout << "  condition : " << condition << std::endl; 
    std::cout << "  other_condition : " << other_condition << std::endl;
    
    std::cout << std::endl;

    std::cout << std::noboolalpha; //disable boolalpha : will print 1 or 0
    std::cout << "Disable boolalpha (1 or 0  ===> std::noboolalpha ): " << std::endl; 
    std::cout << "  condition : " << condition << std::endl;
    std::cout << "  other_condition : " << other_condition << std::endl;
    


    return 0;
}
