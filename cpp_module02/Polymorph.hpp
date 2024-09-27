#pragma once
#define POLYMORPH_HPP
#include <iostream>
#include "ASpell.hpp"

class ASpell;

class Polymorph: public ASpell {
	
	private: 


	public:
		~Polymorph();
		Polymorph();
		
		ASpell * clone() const;
};
