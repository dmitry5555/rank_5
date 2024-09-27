#pragma once

#include <iostream>
#include "ASpell.hpp"

class ASpell;

class Fwoosh : public ASpell {

	private:
		// std::string _name;
		// std::string _effects;
		// Fwoosh();
		Fwoosh(Fwoosh const &);
		Fwoosh const & operator=(Fwoosh const &);

	public:
		Fwoosh();
		~Fwoosh();
		// std::string getName() const;
		// std::string getEffects() const;
		ASpell * clone();
		
		// void launch(ATarget const & target);

		
};