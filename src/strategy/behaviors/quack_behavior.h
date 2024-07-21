#pragma once

class QuackBehavior {
public:
	virtual void quack() = 0;
	virtual ~QuackBehavior() = default;
};
