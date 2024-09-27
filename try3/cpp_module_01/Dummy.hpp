#pragma once

#include <iostream>
#include "ATarget.hpp"

class ATarget;

class Dummy : public ATarget {

	private:

		// Dummy(Dummy const &);
		// Dummy const & operator=(Dummy const &);

	public:
		Dummy();
		// ~Dummy();

		ATarget * clone();
	
};