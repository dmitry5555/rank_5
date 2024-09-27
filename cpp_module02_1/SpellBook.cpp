#include "SpellBook.hpp"

// SpellBook::SpellBook(SpellBook const & obj) {
// 	// *this = obj;
// }
// SpellBook & SpellBook::operator=(SpellBook const & obj) {
// 	// *this = obj;
// 	// return *this;
// }
SpellBook::SpellBook() {
	int i = 0;
	while (i < 100) {
		_spellName[i] = "";
		_spellPtr[i] = nullptr;
		i++;
	}
}
SpellBook::~SpellBook() {}

void SpellBook::learnSpell(ASpell * ptr) {
	int i = 0;
	while (i < 100) {
		if (_spellName[i] == "")
		{
			_spellPtr[i] = ptr->clone();
			_spellName[i] = ptr->getName();
			return ;
		}
		i++;
	}
}

void SpellBook::forgetSpell(std::string const & spell) {
	int i = 0;
	while (i < 100) {
		if (_spellName[i] == spell)
		{
			_spellPtr[i] = nullptr;
			_spellName[i] = "";
		}
		i++;
	}
}

ASpell * SpellBook::createSpell(std::string const spell) {
	int i = 0;
	// ASpell * tmp = NULL;

	while (i < 100) {
		if (_spellName[i] == spell)
		{
			// tmp = _spellPtr[i];
			return _spellPtr[i];
			// return _spellPtr[i];
		}
		i++;
	}

	return nullptr;
}

