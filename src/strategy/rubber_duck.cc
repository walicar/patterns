#include "rubber_duck.h"

#include "behaviors/fly_cannot.h"
#include "behaviors/quack_squeak.h"

RubberDuck::RubberDuck() : Duck(new FlyCannot(), new QuackSqueak()) {}

void RubberDuck::display() const {
	std::cout << "is a rubber duck" << std::endl;
}


