#pragma once
#include <iostream>

#include "ASpell.hpp"
#include "ATarget.hpp"

class SpellBook {

	private:
		std::string _spellName[100];
		ASpell * _spellPtr[100];

		// SpellBook();
		SpellBook(SpellBook const &);
		SpellBook const & operator=(SpellBook const &);

	public:
		SpellBook();
		~SpellBook();

		void learnSpell(ASpell * spell);
		void forgetSpell(std::string const & spellName);
		ASpell * createSpell(std::string const & spell);
				
};