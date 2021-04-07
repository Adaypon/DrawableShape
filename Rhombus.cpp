#include "Rhombus.h"
#include "unistd.h"

Rhombus::Rhombus(unsigned int size) : DrawableShape() {
	std::cout << "\tConstruction of Rhombus\n";
	_size = size;
	_type = Type::Rhombus;
}

Rhombus::~Rhombus() {
	std::cout << "\tDestruction of Rhombus\n";	
}

void Rhombus::draw(std::ostream& s = std::cout) {
	size_t vertexIdx = _size / 2;
	bool sizeIsOdd = _size % 2;
	size_t leftIdx, rightIdx;

	
	if (sizeIsOdd) {
		leftIdx = vertexIdx;
		rightIdx = vertexIdx;
	}
	else {
		leftIdx = vertexIdx - 1;
		rightIdx = vertexIdx;
	}
	
	for (size_t i = 0; i < size(); ++i) {
		for (size_t j = 0; j < size(); ++j) {
			if (j == leftIdx || j == rightIdx) {
				s << _sym;
				continue;
			}
			else {
				s << _symBG;
			}
		}
		s << "\n";

		if (i < vertexIdx) {
			if (sizeIsOdd || (!sizeIsOdd && i != vertexIdx-1)) {
				--leftIdx;
				++rightIdx;
			}
		}
		else {
			++leftIdx;
			--rightIdx;
		}
	}
	s << std::endl;
}