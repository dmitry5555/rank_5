#pragma once

#include <iostream>
#include "ATarget.hpp"
#include "ASpell.hpp"

class ASpell;

class Fwoosh : public ASpell {


	public:
		Fwoosh();
		Fwoosh * clone();
		~Fwoosh();

};