#include <iostream>

int main() {

    int number1 {175};
    int number2 {90};
    bool result = (number1 < number2);//Expression yielding the condition
    std::cout << "------------------------------------" << std::endl;

//========================================================================================
	std::cout << "using free standing 'if' statement : " << std::endl;
   
    //if(result){
	if ( result == true ) {
        std::cout << number1 << " is less than " << number2 << std::endl;
    }
    //if(!result){      //////if result is FALSE
	if ( !(result == true) ) {
        std::cout << number1 << " is NOT less than " << number2 << std::endl;
    }
    std::cout << "------------------------------------" << std::endl;
//=========================================================================================

//=========================================================================================
    //Using else
	std::cout << "using 'else'  : " << std::endl;
	
	if (result == true){
        std::cout << number1 << " is less than " << number2 << std::endl;
    } else {
        std::cout << number1 << " is NOT less than " << number2 << std::endl;
    }
    std::cout << "------------------------------------" << std::endl;
//=========================================================================================

//=========================================================================================
    //Use expression as condition directly
    std::cout << "Using expression as condition : " << std::endl;
	
	if(number1 < number2){
        std::cout << number1 << " is less than " << number2 << std::endl;
    }else{
        std::cout << number1 << " is NOT less than " << number2 << std::endl;
    }
    std::cout << "------------------------------------" << std::endl;
//=========================================================================================

    std::cout << std::endl;


    //Nesting if statements
	std::cout << "Nesting if statements : " << std::endl;
    std::cout << std::endl;
	
    bool red = false;
    bool yellow {false};
    bool green {true};
    bool police_stop{true};

     if(red){
         std::cout << "     Light is red. Stop" << std::endl;
     }
     if(yellow){
         std::cout << "     Light is yellow. Slow down" << std::endl;
     }
	 if(green){
		 std::cout << "     Light is green. Go" << std::endl;
	 }

    std::cout << "------------------------------------" << std::endl;
    std::cout << std::endl; 

    std::cout << "Police officer stops(verbose)" << std::endl;
	 if(green){
         if(police_stop){
             std::cout << "     Stop (police officer can stop you even if the light is green)" << std::endl;
         }
         else{
             std::cout << "     Go" << std::endl;
         }
     }

    std::cout << "------------------------------------" << std::endl;
    std::cout << std::endl;

	std::cout << "Police officer stops(less verbose)" << std::endl;
	 if(green && !police_stop){
         std::cout << "     Go" << std::endl;
     }else{
         std::cout << "     Stop." << std::endl;
     }



    return 0;
}
