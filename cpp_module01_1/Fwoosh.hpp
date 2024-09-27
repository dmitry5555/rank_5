#pragma once

#include <iostream>
#include "ATarget.hpp"
#include "ASpell.hpp"

class ASpell;

class Fwoosh : public ASpell {
	protected:
		// std::string _name;
		// std::string _effects;

	public:
		// Fwoosh(Fwoosh const & obj);
		// Fwoosh & operator=(Fwoosh const & obj);
		Fwoosh();

		// std::string getName() const;
		// std::string getEffects() const;
		Fwoosh * clone();
		~Fwoosh();
		
		// void launch(ATarget const & target) const;
};