#pragma once

#include <iostream>
#include "ATarget.hpp"

class ATarget;
class ASpell;

class SpellBook {

	private:
		std::string _spellName[100];
		ASpell * _spellPtr[100];
		// std::string _name;
		// std::string _effects;
		SpellBook & operator=(SpellBook const & obj);
		SpellBook(SpellBook const & obj);

	public:
		SpellBook();

		// std::string getName() const;
		// std::string getEffects() const;
		// virtual SpellBook * clone() = 0;
		~SpellBook();
		void learnSpell(ASpell *);
		void forgetSpell(std::string const & spell);
		ASpell *  createSpell(std::string const spell);
		// void launch(ATarget const & target) const;
};