
#pragma once

#include <iostream>
#include "ATarget.hpp"

class ATarget;

class ASpell {
	private:
		std::string _name;
		std::string _effects;
		ASpell();
		ASpell(ASpell const &);
		ASpell const & operator=(ASpell const &);

	public:
		ASpell(std::string name, std::string effects);

		virtual ~ASpell();
		std::string getName() const;
		std::string getEffects() const;
		virtual ASpell * clone() = 0;
		
		void launch(ATarget const & target);
		
};