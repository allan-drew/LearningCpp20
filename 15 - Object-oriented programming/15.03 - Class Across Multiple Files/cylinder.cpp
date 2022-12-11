#include "cylinder.h" 
// We need to put the cylinder.h because 
// the implementation in this code will use cylinder.h

// scope resolution operator is ::
// We are using " Cylinder:: " to call the scope resolution operator 
// and telling to the compiler that our functions (ex.: volume () , get_base_radius, etc. ) 
// are in the scope of the Cylinder class 

// constructor
Cylinder::Cylinder(double rad_param,double height_param){
    base_radius = rad_param;
    height = height_param;
}

// o método volume() pertence a classe Cylinder 
double Cylinder::volume(){
    return PI * base_radius * base_radius * height;
}

// o método get_base_radius() pertence a classe Cylinder 
double Cylinder::get_base_radius(){
    return base_radius;
}

// o método get_height() pertence a classe Cylinder 
double Cylinder::get_height(){
    return height;
}

// o método set_base_radius() pertence a classe Cylinder 
void Cylinder::set_base_radius(double rad_param){
    base_radius = rad_param;
}

// o método set_height() pertence a classe Cylinder 
void Cylinder::set_height(double height_param){
    height = height_param;
}


