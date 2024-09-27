#pragma once
#define FIREBALL_HPP
#include <iostream>
#include "ASpell.hpp"

class ASpell;

class Fireball: public ASpell {
	
	private: 


	public:
		~Fireball();
		Fireball();
		
		ASpell * clone() const;
};
