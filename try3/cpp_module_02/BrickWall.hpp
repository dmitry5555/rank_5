#pragma once

#include <iostream>
#include "ATarget.hpp"

class ATarget;

class BrickWall : public ATarget {

	private:

	public:
		BrickWall();
		ATarget * clone();	
};