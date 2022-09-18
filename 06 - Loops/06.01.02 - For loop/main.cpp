#include <iostream>


int main() {

    // Um dos principais usos do laço de repetição FOR é percorrer vetores
    long long fatorial[16];

    fatorial[1] = fatorial[0] = 1;

    for (int i = 2; i < 16; i++)
    {
        fatorial[i] = i * fatorial[i-1];
    }

    for (int i = 0; i < 16; i++)
    {
        std::cout << i << "! = " << fatorial[i] << std::endl;
    }



    return 0;
}
