#pragma once

#include "quack_behavior.h"
#include <iostream>

class QuackSqueak : public QuackBehavior {
	inline void quack() override {
		std::cout << "squeak!" << std::endl;
	}
};


