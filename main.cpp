#include "Rectangle.h"
#include "Triangle.h"
#include "Rhombus.h"
#include "Circle.h"

int main() {
	int n = 0;
	char s, bg;
	DrawableShape* shape = new Circle(10);
	/*
	std::cout << shape->size() << "\n";
	std::cout << *shape;
	
	shape->setSize(10);
	std::cout << shape->size() << "\n";
	shape->draw();
	*/
	std::cout << "new size = ";
	std::cin >> n;
	std::cout << "new symbol: ";
	std::cin >> s;
	std::cout << "new background: ";
	std::cin >> bg;

	shape->setSize(n);
	shape->setSymbol(s);
	shape->setBackgroundSymbol(bg);
	std::cout << shape->size() << "\n";
	std::cout << *shape;
	
	delete shape;
	return 0;
}