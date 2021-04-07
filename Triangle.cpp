#include "Triangle.h"

Triangle::Triangle(unsigned int size) : DrawableShape() {
	std::cout << "\tConstruction of Triangle\n";
	_size = size;
	_type = Type::Triangle;
}

Triangle::~Triangle() {
	std::cout << "\tDestruction of Triangle\n";	
}

void Triangle::draw(std::ostream& s = std::cout) {
	for (size_t i = 0; i < size(); ++i) {
		s << _sym;
		for (size_t j = 1; j < size(); ++j) {
			if (i == _size-1) { // botton
				s << _sym;
			}
			else if (i > 0 && j == i) {
				s << _sym;
			}
			else {
				s << _symBG;
			}
		}
		s << "\n";
	}
	s << std::endl;
}