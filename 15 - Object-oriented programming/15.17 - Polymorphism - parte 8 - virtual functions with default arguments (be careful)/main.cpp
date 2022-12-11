#include <iostream>
#include "derived.h"


////////////////////////////////////////
/// DEFAULT ARGUMENTS WITH VIRTUAL FUNCTIONS CAN BE VERY CONFUSING.
/// THEY'RE BEST AVOIDED 

// Try to avoid default arguments when using polymorphism 



int main(){

    //Base ptr : Uses polymorphism
    Base * base_ptr1 = new Derived;
    double result = base_ptr1->add();
    std::cout <<"Result (base ptr) : " << result  << std::endl; //12
                //////// We called the most specific/specialized version of the add() method (from derived class).
                // BUT, the parameters are going to be decided by static binding. 
                //So, the compiler is going to use the default arguments from the base class, and not from the derived class. 
                // BE CAREFUL!!! 


    std::cout << "---------------------"<< std::endl;
	
    //Base ref : Uses Polymorphism
    Derived derived1;
    Base& base_ref1 = derived1;
    result = base_ref1.add();
    std::cout << "Result (base ref) : " << result << std::endl; // 12
                //////// We called the most specific/specialized version of the add() method (from derived class). 
                // BUT, the parameters are going to be decided by static binding. 
                // So, the compiler is going to use the default arguments from the base class, and not from the derived class. 
                // BE CAREFUL!!! 
    
    std::cout << "---------------------"<< std::endl;


    //Raw objects
    Base base3;
    result = base3.add();
    std::cout << "raw result : " << result << std::endl;


    std::cout << "---------------------"<< std::endl;

    //Row direct object of derived classes 
    Derived derived2;
    result = derived2.add();
    std::cout << "Result (Direct object) : " << result << std::endl; // 22
	
    std::cout << "---------------------"<< std::endl;


	//Raw objects - slicing : uses static binding
	Base base1 = derived2;
	result = base1.add();
    std::cout << "Result (Raw objects assignment) : " << result << std::endl; //11


    std::cout << std::endl;
    std::cout << std::endl;
   
    return 0;
}
