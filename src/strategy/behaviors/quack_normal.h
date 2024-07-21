#pragma once
#include "quack_behavior.h"
#include <iostream>

class QuackNormal : public QuackBehavior {
	inline void quack() override {
		std::cout << "quacking normally" << std::endl;
	}
};
