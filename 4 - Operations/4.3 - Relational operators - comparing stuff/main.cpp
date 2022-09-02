#include <iostream>

int main() {

    int number_1 {100};
    int number_2 {100};

    std::cout << std::boolalpha; //bool as true/false instead of 1/0

    std::cout << number_1 << " < " << number_2 << " => " <<  (number_1 < number_2) << std::endl;
    std::cout << number_1 << " <= " << number_2 << " => " <<  (number_1 <= number_2) << std::endl;
    std::cout << number_1 << " > " << number_2 << " => " <<  (number_1 > number_2) << std::endl;
    std::cout << number_1 << " >= " << number_2 << " => " <<  (number_1 >= number_2) << std::endl;
    std::cout << number_1 << " == " << number_2 << " => " <<  (number_1 == number_2) << std::endl;
    std::cout << number_1 << " != " << number_2 << " => " <<  (number_1 != number_2) << std::endl;
    std::cout << std::endl;

    // Store comparasion result and use it later
    std::cout << " Store comparasion and use it later " << std::endl;
    bool result = (number_1 == number_2);
    std::cout << number_1 << " == " << number_2 << " : " << result << std::endl;


    return 0;
}
