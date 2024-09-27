#include "SpellBook.hpp"



SpellBook const & SpellBook::operator=(SpellBook const & obj){

	return *this;
}
SpellBook::SpellBook(SpellBook const & obj){
	*this = obj;
}

SpellBook::SpellBook() {

	int i = 0;
	while (i < 100) {
		_spellName[i] = "";
		_spellPtr[i] = nullptr;
		i++;
	}


}
SpellBook::~SpellBook(){


}


void SpellBook::learnSpell(ASpell * spell) {

	int i = 0;
	while (i < 100) {
		if (_spellName[i] == "")
		{
			_spellName[i] = spell->getName();
			_spellPtr[i] = spell->clone();
			return ;
		}
		i++;
	}

}
void SpellBook::forgetSpell(std::string const & spellName) {

	int i = 0;
	while (i < 100) {
		if (_spellName[i] == spellName)
		{
			_spellName[i] = "";
			_spellPtr[i] = nullptr;
		}
		i++;
	}

}
ASpell * SpellBook::createSpell(std::string const & spellName) {
	int i = 0;
	ASpell * tmp = NULL;

	while (i < 100) {
		if (_spellName[i] == spellName)
		{
			tmp = _spellPtr[i];
		}
		i++;
	}
	return tmp;
}