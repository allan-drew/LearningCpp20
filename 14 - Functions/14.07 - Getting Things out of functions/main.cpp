#include <iostream>

#include <string>

//////// GETTING THINGS OUT OF FUNCTIONS //////////////


///////// INPUT AND OUTPUT FUNCTION PARAMETERS /////////


//// When we write the function like this, 
// the changes we do inside the function are going to be visible in the outside. 
// We are able to do that because outside is a reference (&)

    void max_str ( const std::string& input1 , const std::string& input2 , std::string& output) {  
                ///Output is a reference. So, because of this, changes will be visible when the function return

        if (input1 > input2) {
            output = input1;
        } else {
            output = input2;
        }

    }


///// More examples : 

    void max_int ( int input1 , int input2 , int& output ) { 
                ///Output is a reference. So, because of this, changes will be visible when the function return

        if ( input1 > input2 ) {
            output = input1;
        } else {
            output = input2;
        }

        ///// The function are not going to be using the return mechanism
        // We are going to be grabbing the output from the function 

    }


/////
    void max_double ( double input1 , double input2 , double* output ) { 
                ///Output is a pointer. So, because of this, changes will be visible when the function return

        if ( input1 > input2 ) {
            *output = input1;
        } else {
            *output = input2;
        }

    }





int main() {

    std::string out_str; 
	std::string string1("Allan");
	std::string string2("Andrew");
	max_str( string1 , string2 , out_str);
	std::cout << "max_str : " << out_str << std::endl;

	std::cout << std::endl;

    int out_int;
    int in1{45};
    int in2{723};
    max_int(in1,in2,out_int);
    std::cout << "max_int : " << out_int << std::endl;

    std::cout << std::endl;

    double out_double;
    double in1_double {45.5};
    double in2_double {12.2};
    max_double ( in1_double , in2_double , &out_double); // We need to pass as a address (&) because double* output is a pointer 
    std::cout << "max_double : " << out_double << std::endl;

    std::cout << std::endl;



    return 0;
}

