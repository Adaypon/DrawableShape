#include "Rectangle.h"

Rectangle::Rectangle(unsigned int size) : DrawableShape() {
	std::cout << "\tConstruction of Rectangle\n";
	_size = size;
	_type = Type::Rectangle;
}

Rectangle::~Rectangle() {
	std::cout << "\tDestruction of Rectangle\n";	
}

void Rectangle::draw(std::ostream& s = std::cout) {
	for (size_t i = 0; i < size(); ++i) {
		for (size_t j = 0; j < size(); ++j) {
			if ((i == 0 || i == _size-1) || (j == 0 || j == _size-1)) {
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
/*
std::ostream& operator<<(std::ostream& s, Rectangle shape) {
	shape.draw(s);
	return s;
}
*/