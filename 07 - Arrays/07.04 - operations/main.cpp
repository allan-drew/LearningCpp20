#include <iostream>

int main() {

    int scores[] {2,5,8,2,5,6,9};
    int sum {0};  ////// Store result in 'sum' variable

    //// Range based for loop 
    // Will get each element and Add to 'sum'
    for ( int element : scores) {
        sum += element; 
    }

    std::cout << " Score sum : " << sum << std::endl;

    std::cout << " ------------------------------------------------- " << std::endl;

    int sum_2 {};
    sum_2 = scores[0] + scores[1];

    std::cout << " Score [0] : " << scores[0] << std::endl;
    std::cout << " Score [1] : " << scores[1] << std::endl;

    std::cout << " Sum of scores[0] + scores[1] : " << sum_2 << std::endl;


    return 0;
}
