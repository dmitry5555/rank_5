#include "ASpell.hpp"

ASpell::ASpell(){}

ASpell const & ASpell::operator=(ASpell const & obj){
	_name = obj._name;
	_effects = obj._effects;
	return *this;
}
ASpell::ASpell(ASpell const & obj){
	*this = obj;
}

ASpell::ASpell(std::string name, std::string effects) : _name(name), _effects(effects)  {
}
ASpell::~ASpell(){

}

std::string ASpell::getName() const {
	return _name;
}
std::string ASpell::getEffects() const {
	return _effects;
}

void ASpell::launch(ATarget const & target) {
// This one will simply call the getHitBySpell of the passed object, passing the
// current instance as parameter.
	target.getHitBySpell(*this);
}
