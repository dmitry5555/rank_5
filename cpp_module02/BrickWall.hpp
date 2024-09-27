#pragma once
#define BRICKWALL_HPP
#include <iostream>
#include "ATarget.hpp"

// class ATarget;

class BrickWall: public ATarget {
	
	private: 


	public:
		~BrickWall();
		BrickWall();
		
		ATarget * clone() const;
};
