#include <iostream>

int main() {

//////////////////// LOGICAL OPERATORS ///////////
    
    ////// AND (&&); OR (||); NOT (!)

    std::cout << "----------------------------------------------------" << std::endl;
    bool a {true};
    bool b {false};
    bool c {true};

    std::cout << std::boolalpha;
    std::cout << "a : " << a << std::endl; 
    std::cout << "b : " << b << std::endl;
    std::cout << "c : " << c << std::endl;

    std::cout << std::endl;
    std::cout << "Basic AND operations" << std::endl;

    std::cout << "a && b : " << (a && b) << std::endl;
    std::cout << "a && c : " << (a && c) << std::endl;
    std::cout << "a && b && c : " << (a && b && c) << std::endl;

    std::cout << std::endl;
    std::cout << "Basic OR operations" << std::endl;

    std::cout << "a || b : " << (a || b) << std::endl;
    std::cout << "a || c : " << (a || c) << std::endl;
    std::cout << "a || b || c : " << (a || b || c) << std::endl;

    std::cout << std::endl;
    std::cout << "Basic NOT operations" << std::endl;

    std::cout << "!a : " << (!a) << std::endl;
    std::cout << "!b : " << (!b) << std::endl;
    std::cout << "!c : " << (!c) << std::endl;

    std::cout << std::endl;
    std::cout << "Combine logical operators in expression" << std::endl;

    std::cout << "!(a && b) || c : " << (! (a && b) || c) << std::endl;


    std::cout << "----------------------------------------------------" << std::endl;

    /////// LOGICAL AND RELATIONAL COMBINED IN EXPRESSIONS
	int d{45};
	int e{20};
	int f{11};
	
	std::cout << std::endl;
	std::cout << "Relational and logic operations combined : " << std::endl;
	std::cout << "d : " << d << std::endl;
	std::cout << "e : " << e << std::endl;
	std::cout << "f : " << f << std::endl;
	
	std::cout << std::endl;
	
	std::cout << "(d > e) && (d > f) : " << ((d > e) && (d > f)) << std::endl; // true
	std::cout << "(d==e) || (e <= f ) : " << ((d==e) || (e <= f ) ) << std::endl;
	std::cout << "(d < e) || (d > f) : " << ((d < e) || (d > f)) << std::endl;
	std::cout << "(f > e) || (d < f) : " << ((f > e) || (d < f)) << std::endl;
	std::cout << "(d > f) && (f <= d) : " << ((d > f) && (f <= d)) << std::endl;
	std::cout << "(d > e) && (d <= f) : " << ((d > e) && (d <= f)) << std::endl;
	std::cout << "(! a) && (d == e) : " << ((! a) && (d == e)) << std::endl;
	std::cout << "(! a) && (d == e) : " << ((! a) && (d == e)) << std::endl;



    return 0;
}
