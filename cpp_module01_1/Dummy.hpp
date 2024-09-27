#pragma once

#include <iostream>
#include "ATarget.hpp"
#include "ASpell.hpp"

class Dummy : public ATarget {

	protected:
		// std::string _type;
		// std::string _effects;

	public:
		// Dummy(Dummy const & obj);
		// Dummy & operator=(Dummy const & obj);
		Dummy();

		// std::string getName() const;
		// std::string getEffects() const;
		~Dummy();
		
		Dummy * clone();
		
		// void launch(ATarget const & target) const;
};