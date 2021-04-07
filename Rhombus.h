#pragma once

#include "DrawableShape.h"

class Rhombus : public DrawableShape {
public:
	Rhombus(unsigned int size);
	~Rhombus() override;
	void draw(std::ostream& s) override;
};