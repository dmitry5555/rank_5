#pragma once

#include <iostream>
#include "ATarget.hpp"
#include "ASpell.hpp"

class ASpell;

class Fireball : public ASpell {


	public:
		Fireball();
		Fireball * clone();
		~Fireball();

};