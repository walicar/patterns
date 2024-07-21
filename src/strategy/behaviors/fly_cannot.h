#pragma once

#include "fly_behavior.h"
#include <iostream>

class FlyCannot : public FlyBehavior {
	inline void fly() override {
		std::cout << "cannot fly" << std::endl;
	}
};
