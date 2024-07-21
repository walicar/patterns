#include <iostream>
#include "strategy/mallard_duck.h"
#include "strategy/rubber_duck.h"

int main() {
	std::cout << "Hello World" << std::endl;
	Duck *m_duck = new MallardDuck();
	Duck *r_duck = new RubberDuck();

	m_duck->display();
	m_duck->perform_fly();
	m_duck->perform_quack();
	std::cout << std::endl;
	r_duck->display();
	r_duck->perform_fly();
	r_duck->perform_quack();

	return 0;
}

