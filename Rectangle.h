#pragma once

#include "DrawableShape.h"

class Rectangle : public DrawableShape {
public:
	Rectangle(unsigned int size = 10);
	~Rectangle() override;
	void draw(std::ostream& s) override;
};