#ifndef  COLOR_H
#define COLOR_H


#include "vec3.h"
#include <iostream>

// sames as point3 we are using vec3 as an color for simpler understanding
using color = vec3;

void write_color(std::ostream& out, const color& pixel_color) {
	auto r = pixel_color.x();
	auto g = pixel_color.y();
	auto b = pixel_color.z();

	// Transalte the [0,1] to byte range [0 , 255]
	int rbyte = int(255.999 * r);
	int gbyte = int(255.999 * g);
	int bbyte = int(255.999 * b);


	// Write out the pixel components
	std::cout << rbyte << ' ' << gbyte << ' ' << bbyte << "\n";


}



#endif // ! COLOR_H


