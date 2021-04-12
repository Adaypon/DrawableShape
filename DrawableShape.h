#pragma once

#include <iostream>
#include <cmath>

enum class Type {
		Rectangle = 0,
		Triangle,
		Circle,
		Rhombus,
		Unknown
	};

class DrawableShape {
public:
	DrawableShape() = default;
	virtual ~DrawableShape() = 0;
	
	void setSymbol(char sym);
	void setBackgroundSymbol(char sym);

	Type getType() const;
	
	virtual void draw(std::ostream& s) = 0;
	
	unsigned int size() const;
	void setSize(unsigned size);

	void setFill(bool flag);
	bool isFilled() const;

	friend std::ostream& operator<<(std::ostream&, DrawableShape&);

protected:
	Type _type;
	unsigned int _size = 0;
	char _sym = '*';
	char _symBG = '-';
	bool _filledFlag = false;
};