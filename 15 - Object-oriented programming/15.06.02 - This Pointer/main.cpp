#include <iostream>

///////// THIS POINTER

// A expressão *this é geralmente usada para retornar o objeto atual de uma função de membro:
// return *this;


class Dog {

    private : 
        std::string dog_name;
        std::string dog_breed; 
        int * dog_age {nullptr};

    public : 
        Dog ();
        Dog ( std::string_view name_param , std::string_view breed_param , int age_param ) 
        {

            dog_name = name_param;
            dog_breed = breed_param;

            dog_age = new int;
            *dog_age = age_param;

            // 'this' keyword represents the address of the current instance of the class
            // 'this' keyword points to the current instance/object of the class; 
            std::cout << " dog constructor called for " << dog_name << " at " << this << std::endl; 
        }

        ~Dog ()
        {
            delete dog_age;
            std::cout << " dog DESTRUCTOR called for " << dog_name << std::endl;
        }


        void print_info () 
        {
            std::cout << "          // DOG NAME : " <<  dog_name << " // DOG BREED : " << dog_breed << "  // DOG AGE : " << *dog_age << std::endl;  
            std::cout << "          The address of object is : (THIS) " << this << std::endl;

        }


        // ==========================
        // When a reference to a local object is returned, 
        // the returned reference can be used to chain function calls on a single object.
        Dog & set_dog_name (std::string_view dog_name) 
        {
            this -> dog_name = dog_name;
            return * this; // returning reference 
        }

        Dog & set_dog_breed (std::string_view dog_breed) 
        {
            this -> dog_breed = dog_breed;
            return * this; // returning reference 
        }
        // ==========================


}; 



int main() {

    std::cout << "=========================== FIRST DOG ===========================\n";
    Dog dog1("Fluffy","Shepherd",2); // This is going to call the constructor, because we are trying to set up an object 
    dog1.print_info();

    std::cout << std::endl;


    // CHAINED CALLS USING POINTERS : 
        // When a reference to a local object is returned, 
        // the returned reference can be used to chain function calls on a single object.
    std::cout << "Changing information about first dog...\n";
    dog1.set_dog_name("Toby").set_dog_breed("Pastor alemao");
    dog1.print_info();


    std::cout << std::endl;
    std::cout << " Done " << std::endl;

    return 0;    
}
