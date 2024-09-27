#pragma once

#include <iostream>
#include "ASpell.hpp"

class ASpell;

class Polymorph : public ASpell {

	private:

		Polymorph(Polymorph const &);
		Polymorph const & operator=(Polymorph const &);

	public:
		Polymorph();
		~Polymorph();
		ASpell * clone();

		
};