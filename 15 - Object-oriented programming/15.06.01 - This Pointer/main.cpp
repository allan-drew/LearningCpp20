#include <iostream>

///////// THIS POINTER

/// Each class member function contains a hidden pointer called 'this'.
/// That pointer contains the address of the current object, for which the method is being executed. 

// O endereço do objeto está disponível na função membro como o ponteiro this. 
// A maioria dos usos de ponteiro this são implícitos. 
// É legal, embora desnecessário, usar um this explícito ao se referir a membros de class.

/* 
void Date::setMonth( int mn )
{
// These three statementsare equivalent

   month = mn;            
   this->month = mn;      
   (*this).month = mn;

}
*/

// A expressão *this é geralmente usada para retornar o objeto atual de uma função de membro:
// return *this;


// ====================================================================================================
// Below are two uses of the 'this' pointer:

    // 1)
        //'this' keyword represents the address of the current instance of the class
        // 'this' keyword points to the current instance/object of the class; 

    // 2)
        // We can use 'this' when local variable’s name is same as member’s name
        // When local variable’s name is same as member’s name
        // So, in this case, we can make chained calls using pointers
// ====================================================================================================


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

            //// 'this' keyword represents the ADDRESS OF the CURRENT instance of the class
            std::cout << "          The address of object is : (THIS) " << this << std::endl;

                //// If we didn't have the 'this' pointer, the only way to get the address to the object 
                // would be to grab the address from the main function 
                /// But we have access to this address from the inside of the functios for the clas 
        }


    // Setters
            // One of the features of 'this' pointer is that it makes the members of the class 
            // readable by distinguishing between the class members and the parameters with the same name. 
            // We have a local variable of same name as that of the data member
            // We use 'this' keyword to tell the compiler that we are referering to objects data members.
             
        // SO, We can use 'this' when local variable’s name is same as member’s name
        Dog* set_dog_name (std::string_view dog_name) 
        {
            this -> dog_name = dog_name; // Diferenciar nomes de atributos e parâmetros
            // this -> class_variable = local_variable
            return this;
        }

        Dog* set_dog_breed (std::string_view dog_breed) 
        {
            this -> dog_breed = dog_breed;
            return this;
        }

        Dog* set_dog_age ( int dog_age ) 
        {
            *(this -> dog_age) = dog_age;
            return this;
        }


}; 



int main() {

    std::cout << "=========================== FIRST DOG ===========================\n";
    Dog dog1("Fluffy","Shepherd",2); // This is going to call the constructor, because we are trying to set up an object 
    dog1.print_info();

    std::cout << std::endl;

    std::cout << "=========================== SECOND DOG ===========================\n";
    Dog dog2 ( "Thor" , "Beagle" , 1 );
    dog2.print_info();

    std::cout << std::endl;


    // Another use of 'this' pointer : 
        // Method chaining is a very useful feature of this pointer. 
        // It helps in chaining the methods together for ease and cleaner code.

        //// Setting name, breed and age for the second dog
        /// So, we are changing the information of our second dog through our setters 

    // CHAINED CALLS USING POINTERS : 
    std::cout << "Changing information about second dog...\n";
    dog2.set_dog_name("Toby")->set_dog_breed("Border collie")->set_dog_age(4);
    dog2.print_info();

    std::cout << " Done " << std::endl;

    return 0;    
}
