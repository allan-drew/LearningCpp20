#include <iostream>

void crescente (int a, int b) {

    for (int i = a; i <= b; i++ )
    {
        std::cout << i << " ";
    }

}

int main() {

    int x;
    int y;

    std::cout << "Enter the initial value = ";
    std::cin >> x;
    std::cout << std::endl;
    std::cout << "Enter the final value = ";
    std::cin >> y;


    crescente ( x , y );

    return 0;
}
