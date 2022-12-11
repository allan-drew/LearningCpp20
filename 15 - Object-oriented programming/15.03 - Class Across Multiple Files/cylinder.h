
#ifndef CYLINDER_H
#define CYLINDER_H

#include "constants.h"

class Cylinder {

    // data members => variables to be used
    private : 
        double base_radius{1};
        double height{1};    


    public : 

        //Constructors
        Cylinder() = default;
        Cylinder(double rad_param,double height_param); 
            // we taked out the body of the function/constructors 
            // and we set up as a prototype for the function.
            // We did the same with the functions/methods below 

        // member functions / class methods
        double volume();

        //Setter and getter methods
        double get_base_radius();

        double get_height();

        void set_base_radius(double rad_param);

        void set_height(double height_param);

};


#endif

