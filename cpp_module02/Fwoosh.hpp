#pragma once
#define FWOOSH_HPP
#include <iostream>
#include "ASpell.hpp"

class ASpell;

class Fwoosh: public ASpell {
	
	private: 


	public:
		~Fwoosh();
		Fwoosh();
		
		ASpell * clone() const;
};
