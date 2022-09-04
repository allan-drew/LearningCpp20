#include <iostream>

int main() {

    //////////////// BOUNDS OF AN ARRAYS //////////////////////////

    int numbers[] {1,2,3,4,5,6,7,8,9,0};
	
	// READ BEYOND BOUNDS : Will read garbage or crash your program
	std::cout << "numbers[12] : " << numbers[12] << " // garbage in numbers[12] // " << std::endl;

	// WRITE BEYOND BOUNDS : The compiler allows it. 
        // But you don't own the memory at index 12, 
        // so other programs may modify it 
        // and your program may read bogus data at a later time. 
        // Or you can even corrupt data used by other parts of your program
        /////  BE  CAREFUL 
	numbers[12] = 1000;
	std::cout << "numbers[12] : " << numbers[12] << " // writing 1000 in numbers[12] \n" << std::endl;

    return 0;
}
