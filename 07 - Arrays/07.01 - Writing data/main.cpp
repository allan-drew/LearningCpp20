#include <iostream>

int main() {

//////////// MANUALLY WRITING DATA INTO AN ARRAY ///////////////////
    
    int scores [5]; 

    std::cout << "=====> Manually writing data in array " << std::endl; 

    int a {};
    int b {};
    int c {};

    std::cout << "enter the first three scores" << std::endl;
    std::cout << " a : ";
    std::cin >> a;
    std::cout << " b : ";
    std::cin >> b;
    std::cout << " c : ";
    std::cin >> c;

    scores [0] = a;
    scores [1] = b;
    scores [2] = c;

    for ( size_t i{0} ; i < 5 ; ++i ) {

        std::cout << "scores [i: " << i << "] : " << scores[i] << " // ";

        // Testing if it was included manually 
        if ( scores[ i ] == a || scores[ i ] == b || scores[ i ] == c ) {
                std::cout << " manually writing ";
        } else {
            std::cout << " junk data ";
        }
        std::cout << std::endl;

    }

    

    std::cout << std::endl;
    std::cout << "-----------------------------" << std::endl;
    std::cout << std::endl;

   //////////// WRITING DATA WITH A LOOP //////////////////////////

    int goals [5];

    std::cout << "=====> Writing data in array with loop " << std::endl; 
    std::cout << "Each 'i' will be multiplied by 3 " << std::endl; 


    for ( size_t i{0}; i < 5; ++i ){
        goals[i] = i*3;
    }

    for ( size_t i{0}; i < 5; ++i) {
        std::cout << " goals [i: " << i << "] *3: " << goals[i] << std::endl;
    }


    return 0;
}
