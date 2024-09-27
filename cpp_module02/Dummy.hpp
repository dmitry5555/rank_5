#pragma once
#define DUMMY_HPP
#include <iostream>
#include "ATarget.hpp"

// class ATarget;

class Dummy: public ATarget {
	
	private: 


	public:
		~Dummy();
		Dummy();
		
		ATarget * clone() const;
};
