#pragma once

#include <iostream>
#include "ASpell.hpp"

class ASpell;

class Fireball : public ASpell {

	private:

		Fireball(Fireball const &);
		Fireball const & operator=(Fireball const &);

	public:
		Fireball();
		~Fireball();
		ASpell * clone();

		
};