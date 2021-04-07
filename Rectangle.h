#pragma once

#include "DrawableShape.h"

class Rectangle : public DrawableShape {
public:
	Rectangle(unsigned int size);
	~Rectangle() override;
	void draw(std::ostream& s) override;
};