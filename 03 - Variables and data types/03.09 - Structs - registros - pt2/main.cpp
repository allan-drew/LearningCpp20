#include <iostream>
#include <cstring> // necessário para usar strcpy

///////////////////// STRUCTS / REGISTROS /////////////////////

struct cars { 
    char nameOfCar [20];
    float price;
    unsigned year;
};

// ====================================================================================== 

int main() {

    cars Volkswagen [10] = {
        { "UP!" , 45000 , 2019 }, 
        { "GOL" , 55000 , 2020 },
        { "POLO" , 65000 , 2021 }, 
    };

    std::cout << " ----------------------------------------------- \n";

    std::cout << "Cars of Volks available : " 
    << Volkswagen[0].nameOfCar << " , " 
    << Volkswagen[1].nameOfCar << " , " 
    << Volkswagen[2].nameOfCar << std::endl;

    // Volkswagen é um vetor com 10 carros 
    // O tipo da informação Volkswgaen é um tipo cars[10]

    // Volkswagen.nameOfCar ====> inválido (pois Volkswagen não é um registro, e sim um vetor).
            // Um vetor não possui campos (nome, preço, ano, etc..); um vetor possui índices!!

    // Volkswagen[0].nameOfCar ==> tipo char[20]

    
    return 0;
}
