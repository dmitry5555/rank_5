#pragma once

#include <iostream>
#include "ATarget.hpp"
#include "ASpell.hpp"

class BrickWall : public ATarget {

	public:
		BrickWall();
		~BrickWall();
		BrickWall * clone();

};