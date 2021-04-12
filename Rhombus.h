#pragma once

#include "DrawableShape.h"

class Rhombus : public DrawableShape {
public:
	Rhombus(unsigned int size = 10);
	~Rhombus() override;
	void draw(std::ostream& s) override;
};