#include <iostream>

int main() {

    // different number systems : std::dec, std::hex, std::oct
    
    int pos_int {717171};
    int neg_int {-47347};
    double double_var {498.32};
    
    std::cout << std::endl;
    std::cout << "default base format : " << std::endl;
    std::cout << "      pos_int : " << pos_int << std::endl;
    std::cout << "      neg_int : " << neg_int << std::endl;
    std::cout << "      double_var : " << double_var << std::endl;
    
    std::cout << std::endl;
    std::cout << "pos_int in different bases : " << std::endl;
    std::cout << "      pos_int (dec) : " << std::dec << pos_int << std::endl;
    std::cout << "      pos_int (hex) : " << std::hex << pos_int << std::endl;
    std::cout << "      pos_int (oct) : " << std::oct << pos_int << std::endl;
    
    std::cout << std::endl;
    std::cout << "neg_int in different bases : " << std::endl;
    std::cout << "      neg_int (dec) : " << std::dec << neg_int << std::endl;
    std::cout << "      neg_int (hex) : " << std::hex << neg_int << std::endl;
    std::cout << "      neg_int (oct) : " << std::oct << neg_int << std::endl;
    
    std::cout << std::endl;
    std::cout << "double_var in different bases (DON'T CHANGE! float or double are representing on memory with another protocol ) : " << std::endl;
    std::cout << "      double_var (dec) : " << std::dec << double_var << std::endl;
    std::cout << "      double_var (hex) : " << std::hex << double_var << std::endl;
    std::cout << "      double_var (oct) : " << std::oct << double_var << std::endl;

    return 0;
}
