#pragma once

#include <iostream>
#include "ATarget.hpp"
#include "ASpell.hpp"

class ASpell;

class Polymorph : public ASpell {


	public:
		Polymorph();
		Polymorph * clone();
		~Polymorph();

};