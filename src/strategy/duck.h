#pragma once

#include <iostream>

class Duck {
public:
	Duck();
	Duck(FlyBehavior fly_behavior, QuackBehavior quack_behavior);
	void swim();
	virtual void display();
	void perform_quack();
	void perform_fly();
	void set_fly_behavior(FlyBehavior fly_behavior);
	void set_quack_behavior(QuackBheavior quack_behavior);

private:
	FlyBehavior fly_behavior;
	QuackBehavior quack_behavior;
};
