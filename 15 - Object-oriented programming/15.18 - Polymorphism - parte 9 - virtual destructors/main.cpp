#include <iostream>

#include <string>
#include <string_view>


class Animal {

    protected : 
        std::string m_description;

    public : 
        Animal() = default;
        Animal ( std::string_view description );

        virtual ~Animal() {
                std::cout << "Animal destructor called" << std::endl;
        };

        virtual void breathe () const {
            std::cout << "Animal::breathe called for : " << m_description << std::endl;
        };
};


class Feline : public Animal {

    public : 
        Feline() = default;
        Feline(std::string_view fur_style, std::string_view description);

        virtual ~Feline() {
                std::cout << "Feline destructor called" << std::endl;
        }
        
        virtual void run() const{
            std::cout << "Feline " << m_description << " is running" << std::endl;
        };
        
        //std::string m_fur_style;   

};



class Cat : public Feline { 

    public :
        Cat() = default;
        Cat(std::string_view fur_style, std::string_view description);

        virtual ~Cat() { 
            std::cout << "Cat destructor called" << std::endl;
        }
        
        virtual void miau () const{
            std::cout << "Cat::miau called : MIAU!" << std::endl;
        }

};




int main() {

// ====================================================

    //// In this case, when we don't mark destructors as 'virtual', only Animal destructor is called. 
    // BAD!
    // This is something we don't want!

    // We are using a base pointer to manage a most specific object

    /// ************* Test this code below with NO 'virtual' in destructors : 

    // Animal* animal1 = new Cat;
    // delete animal1; 
        
        ///ONLY THE DESTRUCTOR FOR ANIMAL IS CALLED, even if we are really managing a cat object....
        // And if we only call the animal destructor, 
        // any dynamic memory that might have been allocated at the feline and cat level is going to be leaked out.

// ===================================================== 


// ====================================================== 

    // To solve the problem, we need the destructor to be called using polymorphism 
    //and you can set that up by marking your destructor as VIRTUAL 

    // In this case, the compiler will know that if you are going through a base pointer to manage a derived object, 
    //when the time comes for the memory to be released and you release the memory through a base pointer 
    //the compiler is going to call the most specifid destructor  
    Animal* animal1 = new Cat;
    delete animal1;



    return 0;
}
