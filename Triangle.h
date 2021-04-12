#pragma once

#include "DrawableShape.h"

class Triangle : public DrawableShape {
public:
	Triangle(unsigned int size = 10);
	~Triangle() override;
	void draw(std::ostream& s) override;
};