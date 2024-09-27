#pragma once
#define SPELLBOOK_HPP
#include <iostream>
#include "ASpell.hpp"


class SpellBook {

	private:
		SpellBook(SpellBook const & obj);
		SpellBook & operator=(SpellBook const & obj);

		std::string _spellName[100];
		ASpell * _spellPtr[100];

	public:
		SpellBook();
		~SpellBook();
		void learnSpell(ASpell*);
		void forgetSpell(std::string const &);
		ASpell* createSpell(std::string const &);

};