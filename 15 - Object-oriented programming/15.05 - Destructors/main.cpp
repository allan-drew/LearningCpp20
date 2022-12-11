#include <iostream>
#include <string_view>

/////// DESTRUCTORS
// A função do destrutor é encerrar/destruir coisas (LIBERAR RECURSOS!)
    // Importante para liberar memória alocada, fechar arquivos abertos, encerrar conexões estabelecidas
    // Destrutores são chamados no final da vida do objeto
    // O compilador cria um destrutor padrão se um não for definido

/// Destructors are special methods/functions that are called when a object dies.
/// They are needed when the object needs to release some dynamic memory, of for some other kind of clean up

/// The destructor are called in weird places that may not be obvious
    // - When an object is passed by value to a function
    // - When a local object is returned from a function (for some compilers)

/// Other obvious cases are 
    // - When a local stack object goes out of scope (dies)
    // - When a heap object is released with delete

        // Outras linguagens mais atuais não utilizam destrutores 
        // Elas utilizam "coletores de lixo"



class Dog {

    private : 
        std::string dog_name;
        std::string dog_breed; //raça
        int * dog_age {nullptr};

    public : 
    // Constructors 
        Dog (); // default constructor
        Dog ( std::string_view name_param , std::string_view breed_param , int age_param ) {
            dog_name = name_param;
            dog_breed = breed_param;

            dog_age = new int; /// Allocate memory / Dynamic memory allocation
            *dog_age = age_param; // Put data in that memory location

            std::cout << " C : dog constructor called for " << dog_name << std::endl;
        }

    // Destructors 
        // O destrutor não possui parâmetros e não possui retorno
        ~Dog (){
            delete dog_age; /// release the memory 
            std::cout << " D : ==>> dog DESTRUCTOR called for " << dog_name << std::endl;
        }

    // Normalmente se faz a alocação com o new no construtor ( exemplo acima alocando ---->  dog_age = new int; )
    // E se faz a liberação com o delete no destrutor (exemplo acima liberando ----> delete dog_age; )

};


// ========================== 
// A vida do objeto chega ao fim dependendo de como e onde o objeto foi criado : 
    // variável estática ou global
    // variável local ou parâmetro
    // alocado dinamicamente
    // temporário
// ========================== 


// Para acompanhar o ciclo de vida de um objeto, pode-se utilizar 
// do std::cout dentro do construtor e destrutor


// ===========
// Objeto global:
    Dog randomDog ( " My Global Dog " , " Beagle " , 10);
        // criação no início do programa
        // destruição no fim do programa (chamada do Destrutor)

// ===========
// Objeto estático :
    void setUpStaticDog () {
        // Objeto estático :
        static Dog myStaticDog { "My Static Dog" , " Sheperd ", 4 };
    }
        // criação na declaração da variável
        // destruição no fim do programa (chamada do Destrutor)


// ===========
// Objeto local :
    void setUpFirstDog () {
        Dog my_first_dog ( " Fluffy " , " Sheperd " , 3 );
        // In this case, the compiler will call our destructor after it leaves setUpFirstDog. 
        // It's going to be destroying the local object that we have inside setUpFirstDog
            // criação na declaração da variável
            // destruição no fim do bloco (chamada do Destrutor)
            // variáveis locais são liberadas da memória ao final do bloco 
    }


// ===========
// Objeto alocado dinamicamente :
    void setUpSecondDog () {
        // Passing class object parameter by value 
        Dog * my_second_dog = new Dog ( " 1st Dynamic Dog " , " Golden Retriever " , 4 );
        // In this case, for the destructor to be called, we need to explicitly release the memory. 
        // We use 'delete' to do that
        delete my_second_dog; // Causes for the destructor of Dog to be called
    }
        // criação na execução do new
        // destruição na execução do delete

// ===========
// Se o delete for chamado somente no final da função main, 
// então apenas ao final dela é que será destruído
// exemplo:
    void functionDestructor ( Dog * doguinho ) {
        delete doguinho;
        std::cout << " D : ==>> dog DESTRUCTOR called (functionDestructor)\n";
    }
        // criação na execução do new
            // new executado dentro da main(): 
            // Dog * my_another_dog = new Dog....... 
        // destruição na execução do delete
            // delete executado na chamada da função functionDestructor, ao final da main()
// ===========




int main() {

    Dog * my_another_dog = new Dog ( " 2nd Dynamic Dog ", " Beagle " , 7 ); // Dynamic alocation

    setUpStaticDog();
    std::cout << std::endl;

    setUpFirstDog ();
    std::cout << std::endl;

    setUpSecondDog ();
    std::cout << std::endl;


    std::cout << " ------------------------------------------------ " << std::endl;
    Dog my_dog3 ( " My Dog 3 " , " Beagle " , 5);
    Dog my_dog4 ( " My Dog 4 " , " Beagle " , 2);
    Dog my_dog5 ( " My Dog 5 " , " Beagle " , 7);
    Dog my_dog6 ( " My Dog 6 " , " Beagle " , 1);

    std::cout << " Done! " << std::endl;
    std::cout << " ************* DESTRUCTORS are going to be called in reverse order ************* " << std::endl;


    functionDestructor (my_another_dog);

    return 0;
}
