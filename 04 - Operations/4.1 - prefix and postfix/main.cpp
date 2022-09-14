#include <iostream>

int main() {

    /////////////////// PREFIX AND POSTFIX (+ and -)

    int value {5};
    value = value + 1;
    std::cout << "THE VALUE IS : " << value << std::endl;

    value = 5; /// RESET VALUE TO 5
    value = value - 1;
    std::cout << "THE VALUE IS : " << value << std::endl; 

    /// POSTFIX
    value = 5; /// RESET VALUE TO 5
    value++;
    std::cout << "THE VALUE IS (incrementing with postfix ++) : " << value << std::endl;

    value = 5; /// RESET VALUE TO 5
    value--;
    std::cout << "THE VALUE IS (decrementing with postfix --) : " << value << std::endl;

    /// PREFIX
    value = 5; /// RESET VALUE TO 5
    ++value;
    std::cout << "THE VALUE IS (incrementing with prefix ++): " << value << std::endl; 

    value = 5; /// RESET VALUE TO 5
    --value;
    std::cout << "THE VALUE IS (decrementing with prefix --): " << value << std::endl; 

    /////////////// 
    value = 5; /// RESET VALUE TO 5
    std::cout << "THE VALUE IS : " << value++ << " * nao imprime 6, por causa do uso do postfix" <<std::endl; 
    std::cout << "THE VALUE IS : " << value << " * imprime 6, pois foi feito o incremento anteriormente " << std::endl;

    value = 5; /// RESET VALUE TO 5
    std::cout << "THE VALUE IS : " << value-- << " * nao imprime 4, por causa do uso do postfix" <<std::endl; 
    std::cout << "THE VALUE IS : " << value << " * imprime 4, pois foi feito o decremento anteriormente " << std::endl;


    return 0;
}
