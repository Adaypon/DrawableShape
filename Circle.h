#pragma once

#include "DrawableShape.h"

class Circle : public DrawableShape {
public:
	Circle(unsigned int size = 10);
	~Circle() override;
	void draw(std::ostream& s) override;
};