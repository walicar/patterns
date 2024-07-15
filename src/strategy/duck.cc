#include "duck.h"

Duck::Duck() {}

Duck::Duck(FlyBehavior fly_behavior, QuackBehavior quack_behavior) {
	this->fly_behavior = fly_behavior;
	this->quack_behavior = quack_behavior;
}


void Duck::swim() {
	std::cout << "All Ducks Float" << std::endl;
}

void Duck::perform_fly() {
	this->fly_behavior.fly();
}

void Duck::perform_quack() {
	this->quack_behavior.quack();
}

void Duck::set_fly_behavior(FlyBehavior fly_behavior) {
	this->fly_behavior = fly_behavior;
}

void Duck::set_quack_behavior(QuackBehavior quack_behavior) {
	this->quack_behavior = quack_behavior;
}

