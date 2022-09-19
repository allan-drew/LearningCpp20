#include <iostream>

int main() {

    // WHILE LOOP

    // O uso do 'while' é recomendado quando NÃO se sabe quantas vezes irá repetir
    // Using 'while' is recommended when you DON'T know how many times it will repeat

    std::cout << " Enter some number to add and 0 to exit : \n";

    int number {0};
    int sum {0};

    std::cin >> number;

    while ( number != 0 ) 
    {
        sum += number; // sum = sum + number
        std::cin >> number;
    }

    std::cout << " The sum is = " << sum;


    return 0;
}
