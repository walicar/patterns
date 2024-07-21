#pragma once

#include "behaviors/fly_behavior.h"
#include "behaviors/quack_behavior.h"
#include <iostream>

class Duck {
public:
	Duck(FlyBehavior* fly_behavior, QuackBehavior* quack_behavior);
	~Duck();
	void swim();
	virtual void display() const = 0;
	void perform_quack();
	void perform_fly();
	void set_fly_behavior(FlyBehavior* fly_behavior);
	void set_quack_behavior(QuackBehavior* quack_behavior);

private:
	FlyBehavior* fly_behavior;
	QuackBehavior* quack_behavior;
};
