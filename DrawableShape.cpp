#include "DrawableShape.h"

/*
DrawableShape::DrawableShape() {
	std::cout << "\tConstruction of Base Shape\n";
	_type = Type::Unknown;
}
*/

DrawableShape::~DrawableShape() {
	std::cout << "\tDestruction of Base Shape\n";
}


/*
void DrawableShape::draw(std::ostream& s = std::cout) {
	s << "Unknown shape" << std::endl;
}
*/

void DrawableShape::setSymbol(char sym) {
	_sym = sym;
}

void DrawableShape::setBackgroundSymbol(char sym) {
	_symBG = sym;
}

Type DrawableShape::getType() const {
	return _type;
}

unsigned int DrawableShape::size() const {
	return _size;
}

void DrawableShape::setSize(unsigned int size) {
	_size = size;
}

void DrawableShape::setFill(bool flag) {
	_filledFlag = flag;
}

bool DrawableShape::isFilled() const {
	return _filledFlag;
}

std::ostream& operator<<(std::ostream& s, DrawableShape& shape) {
	shape.draw(s);
	return s;
}