#include "mallard_duck.h"

#include "behaviors/fly_wings.h"
#include "behaviors/quack_normal.h"


MallardDuck::MallardDuck() : Duck(new FlyWings(), new QuackNormal()) {}

void MallardDuck::display() const {
	std::cout << "is a mallard duck" << std::endl;
}
