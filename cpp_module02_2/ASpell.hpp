#pragma once

#include <iostream>
#include "ATarget.hpp"

class ATarget;

class ASpell {

	protected:
		std::string _name;
		std::string _effects;

	public:
		ASpell(ASpell const & obj);
		ASpell & operator=(ASpell const & obj);
		ASpell(std::string name, std::string effects);

		std::string getName() const;
		std::string getEffects() const;
		virtual ASpell * clone() = 0;
		virtual ~ASpell();
		
		void launch(ATarget const & target) const;
};