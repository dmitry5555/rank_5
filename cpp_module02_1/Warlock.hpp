#pragma once
#include <iostream>
#include "ATarget.hpp"
#include "ASpell.hpp"
#include "SpellBook.hpp"

class SpellBook;

class Warlock {

	private:
		// std::string _spellName[100];
		// ASpell * _spellPtr[100];
		SpellBook _spellBook;

		Warlock();
		Warlock(Warlock const & obj);
		Warlock & operator=(Warlock const & obj);
		std::string _name;
		std::string _title;

	public:
		Warlock(std::string name, std::string title);
		~Warlock();
		std::string const & getTitle() const;
		std::string const & getName() const;
		void setTitle(std::string const & str);
		void introduce() const;

		void learnSpell(ASpell *);
		void forgetSpell(std::string spell);
		void launchSpell(std::string spell, ATarget & target);

};