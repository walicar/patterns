#pragma once

#include "fly_behavior.h"
#include <iostream>

class FlyWings : public FlyBehavior {
	inline void fly() override {
		std::cout << "I am flying with wings" << std::endl;
	}
};
