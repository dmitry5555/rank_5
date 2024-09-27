#pragma once

#include <iostream>
#include "ASpell.hpp"

class ASpell;

class Fwoosh : public ASpell {

	private:

		Fwoosh(Fwoosh const &);
		Fwoosh const & operator=(Fwoosh const &);

	public:
		Fwoosh();
		~Fwoosh();
		ASpell * clone();

		
};