#include <iostream>

//// STRUCT 
/// Another syntax to create classes. Using struct keyword, members will be private by default 

        //// STRUCT keyword =======> Members public by default 

        /// CLASS keyword ========> Members private by default 

/// We can change the defaults by putting our public and private sections 

/// A common use for STRUCT is when we need to set up classes that only have public member variables 
// and you don't really want to use functions/methods in that class as well


////////////////////////////////
// Dog class using 'class' syntax
class Dog {
    public : ///We are changing the default by putting 'public'
        std::string m_name;
};

// Cat class using 'struct' syntax
struct Cat {
    public : /// We are NOT changing the default because it's public by default  
        std::string m_name;
};
///////////////////////////////


///////////////////////////////
struct Point {
    double x; // public by default
    double y; // public by default
};

void print_point ( const Point& point ) {
    std::cout << " POINT : " << " x :" << point.x << " , y :" << point.y << std::endl;
}
///////////////////////////////



int main() {

    Dog dog_1; 
    Cat cat_1;

    dog_1.m_name = " Tobby "; /// It's possible to do that because we modified std::string m_name to 'public' 
    std::cout << " NAME of the DOG : " << dog_1.m_name << std::endl;

    cat_1.m_name = " Thor "; /// It's possible to do that because std::string m_name is 'public'
    std::cout << " NAME of the CAT : "<< cat_1.m_name << std::endl;

    ///////////////////////////////////////////

    Point point_1;
    point_1.x = 10; // It's possible to do that because double x is public by default
    point_1.y = 5.2; // It's possible to do that because double y is public by default
    print_point ( point_1 );

    point_1.x = 23.9;
    point_1.y = 54;
    print_point ( point_1 );




    return 0;
}
