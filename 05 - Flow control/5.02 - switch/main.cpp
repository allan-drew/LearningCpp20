#include <iostream>

int main() {

/////////// SWITCH ////////////////////

enum Filters {
    lowPass = 0,
    bandPass,
    highPass
};

int typeOfFilter;
std::cout << " Choose the filter ( 0 , 1 or 2) : " << std::endl;
std::cin >> typeOfFilter; 

int filter { typeOfFilter };

    switch ( filter ) { /// Condition (inside parentheses) can only be integer of enum
                                    // COMPILE ERROR : 
                                        //std::string name {"John"};
                                        // switch (name) // Compiler error! Can not be string!  
        case lowPass:{
            std::cout << "Active filter if lowpass" << std::endl;
        } break; // BREAK: Stops processing the switch block when a successful case has been found. 
                // Jump out of the switch block ///////

        case bandPass: {
            std::cout << "Active filter if bandpass" << std::endl;
        } break;

        case highPass: {
            std::cout << "Active filter if highpass" << std::endl;
        } break;
        
        default: { 
            std::cout << " No match found" << std::endl;
        } break;

    }


    return 0;
}
