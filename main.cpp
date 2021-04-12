#include "Rectangle.h"
#include "Triangle.h"
#include "Rhombus.h"
#include "Circle.h"

int main(int argc, char* argv[]) {
	int n = 0;
	char s, bg, answer;
	bool flag;

	if (argc != 2) {
        std::cout << "Wrong argument count" << std::endl;
        return 1;
    }

	DrawableShape* shape = nullptr;

	const std::string arg = std::string(argv[1]);
	if (arg == "rectangle") {
        shape = new Rectangle();
    }
    else if (arg == "triangle") {
        shape = new Triangle();
    }
    else if (arg == "rhombus") {
        shape = new Rhombus();
    }
	else if (arg == "circle") {
        shape = new Circle();
    }
	else {
        std::cout << "Unknown shape " << arg << std::endl;
        return 2;
    }
		
	std::cout << "new size = ";
	std::cin >> n;
	std::cout << "new symbol: ";
	std::cin >> s;
	std::cout << "new background: ";
	std::cin >> bg;
	std::cout << "fill (Y/N)?";
	std::cin >> answer;
	if (answer == 'y') {
		flag = true;
	}
	else if (answer == 'n') {
		flag = false;
	}

	shape->setSize(n);
	shape->setSymbol(s);
	shape->setBackgroundSymbol(bg);
	shape->setFill(flag);
	
	std::cout << shape->size() << "\n";
	std::cout << *shape;
	
	delete shape;
	return 0;
}