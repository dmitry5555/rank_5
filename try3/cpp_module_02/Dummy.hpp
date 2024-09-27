#pragma once

#include <iostream>
#include "ATarget.hpp"

class ATarget;

class Dummy : public ATarget {

	private:

	public:
		Dummy();
		ATarget * clone();	
};