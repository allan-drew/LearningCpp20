#include <iostream>

int main() {

    // Pointers and Arithmetics 
    
    // Endereços podem ser somados e subtraídos
    // O valor somado ou subtraído depende do tipo


    int * pointerInt = new int [2];
    std::cout << " address pointerInt (before): " << pointerInt << std::endl;

    pointerInt = pointerInt + 1; //avança 4 bytes
    std::cout << " address pointerInt (after): " << pointerInt << std::endl;


// ==================================================================================================
    short * pointerShort = new short [2];
    std::cout << " address pointerShort (before): " << pointerShort << std::endl;

    pointerShort = pointerShort + 1; // avança 2 bytes
    std::cout << " address pointerShort (after): " << pointerShort << std::endl;

    return 0;
}
