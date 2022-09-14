#include <iostream>

int main() {

    //showpos and noshowpos : show or hide the +  sign for positive numbers
    
    int pos_num { 100 };
    int neg_num { - 50 };
    
    std::cout << "----------------" << std::endl;
    std::cout << " ***** Default (no + sign) *****: " << std::endl;
    std::cout << "pos_num : " << pos_num << std::endl;
    std::cout << "neg_num : " << neg_num << std::endl;
    
    std::cout << "----------------" << std::endl;
    std::cout << " ***** Enable + sign (std::showpos) *****: " << std::endl;
    std::cout << std::showpos;
    std::cout << "pos_num : " << pos_num << std::endl;
    std::cout << "neg_num : " << neg_num << std::endl; 

    std::cout << "----------------" << std::endl;
    std::cout << " ***** Disable + sign (std::noshowpos) *****: " << std::endl;
    std::cout << std::noshowpos;
    std::cout << "pos_num : " << pos_num << std::endl;
    std::cout << "neg_num : " << neg_num << std::endl;   


    return 0;
}
