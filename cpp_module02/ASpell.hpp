#pragma once
#define ASPELL_HPP
#include <iostream>
#include "ATarget.hpp"

class ATarget;

class ASpell {
	
	protected:
		std::string _name;
		std::string _effects;
	
	public:

		virtual ~ASpell();
		ASpell(std::string name, std::string effects);
		ASpell & operator=(ASpell const & obj);
		ASpell(ASpell const & obj);
		
		std::string getName() const;
		std::string getEffects() const;
		virtual ASpell * clone() const = 0;
		void launch(ATarget const & target) const;
};