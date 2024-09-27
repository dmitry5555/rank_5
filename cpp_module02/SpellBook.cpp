#include "SpellBook.hpp"

SpellBook::SpellBook(){}

SpellBook & SpellBook::operator=(SpellBook const & obj)
{
	int i = 0;
	while ( i < 100)
	{
		_spellName[i] = obj._spellName[i];
		_spellPtr[i] = obj._spellPtr[i]->clone();
		i++;
	}
	return *this;
}

SpellBook::SpellBook(SpellBook const & obj){
	*this = obj;
}


SpellBook::~SpellBook(){}

void SpellBook::learnSpell(ASpell* ptr)
{
// that COPIES a spell in the book
	int i = 0;
	while ( i < 100)
	{
		if (_spellName[i] != "")
		{
			_spellName[i] = ptr->getName();
			_spellPtr[i] = ptr->clone();
			return ; 
		}
		i++;
	}
	
}

void SpellBook::forgetSpell(std::string const & str)
{
// that deletes a spell from the book, except
// if it isn't there
	int i = 0;
	while ( i < 100)
	{
		if (_spellName[i] == str)
		{
			_spellName[i] = "";
			_spellPtr[i] = nullptr;
			return ; 
		}
		i++;
	}

}

ASpell* SpellBook::createSpell(std::string const & str)
{
// that receives a string corresponding to
//   the name of a spell, creates it, and returns it
	ASpell * tmp = NULL;

	int i = 0;
	while ( i < 100)
	{
		if (_spellName[i] == str)
		{
			// _spellName[i] = "";
			tmp = _spellPtr[i];
			return tmp;
		}
		i++;
	}
	return tmp;
}

