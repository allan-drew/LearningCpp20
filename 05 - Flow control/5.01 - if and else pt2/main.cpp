#include <iostream>

int main() {

//////////// IF WITH INITIALIZER ////////////////////

    bool go { true };

    // if go = true
	if ( int speed {65}; go ) {
        std::cout << "speed : " << speed << std::endl;
		
		if ( speed > 50 ) {
			std::cout << "  Slow down! You are travelling at " << speed << " km/h " <<  std::endl;
		} else {
			std::cout << "  All good!" << std::endl;
		}
        
    // if go = false
	} else {
        std::cout << "speed : " << speed << std::endl;
		std::cout << "  Stop" << std::endl;
	}
    

std::cout << "====================================" << std::endl;

///////////// ELSE IF ///////////////////

    const int Pen{ 10 }; 
    const int Marker{ 20 };
    const int Eraser{ 30 };
    const int Rectangle{ 40 };
    const int Circle{ 50 };
    const int Ellipse{ 60 };

    int tool {Eraser};

    if (tool == Pen) {
        std::cout << "Active tool is pen" << std::endl;
        //Do the actual painting
    }
    else if (tool == Marker) {
        std::cout << "Active tool is Marker" << std::endl;
    }
    else if (tool == Eraser) {
        std::cout << "Active tool is Eraser" << std::endl;
    }
    else if (tool == Rectangle) {
        std::cout << "Active tool is Rectangle" << std::endl;
    }
    else if (tool == Circle) {
        std::cout << "Active tool is Circle" << std::endl;
    }
    else if (tool == Ellipse) {
        std::cout << "Active tool is Ellipse" << std::endl;
    }

    std::cout << "Moving on" << std::endl;
    


    return 0;
}
