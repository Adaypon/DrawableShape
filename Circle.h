#pragma once

#include "DrawableShape.h"

class Circle : public DrawableShape {
public:
	Circle(unsigned int size);
	~Circle() override;
	void draw(std::ostream& s) override;
};