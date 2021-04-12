#include "Circle.h"

Circle::Circle(unsigned int size) : DrawableShape() {
	std::cout << "\tConstruction of Circle\n";
	_size = size;
	_type = Type::Circle;
}

Circle::~Circle() {
	std::cout << "\tDestruction of Circle\n";	
}

void Circle::draw(std::ostream& s = std::cout) {
	float radius = static_cast<float>(_size) / 2;

	for (size_t i = 0; i <= size(); i++)
	{
		for (size_t j = 0; j <= size(); j++)
		{
			float distanceToCentre = sqrt((i - radius)*(i - radius) + (j - radius)*(j - radius));
			if (distanceToCentre > radius-0.5 && distanceToCentre < radius+0.5) { // approximation
				s << _sym;
			}
			else if (distanceToCentre < radius) {
				s << (isFilled() ? _sym : _symBG);
			}
			else {
				s << _symBG;
			}
		}
		s << "\n";
	}
	s << std::endl;
}