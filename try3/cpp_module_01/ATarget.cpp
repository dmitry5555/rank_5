#include "ATarget.hpp"

ATarget::ATarget(){}

ATarget const & ATarget::operator=(ATarget const & obj){
	_type = obj._type;
	return *this;
}
ATarget::ATarget(ATarget const & obj){
	*this = obj;
}

ATarget::ATarget(std::string type) : _type(type)  {
}

ATarget::~ATarget(){ }

std::string const & ATarget::getType() const {
	return _type;
}

void ATarget::getHitBySpell(ASpell const & spell) const {
	// <TYPE> has been <EFFECTS>!
	// <TYPE> is the ATarget's type, and <EFFECTS> is the return of the ASpell's
	// getEffects function.

	std::cout << _type << " has been " << spell.getEffects() << "!" <<  std::endl;
}

// void ATarget::launch(ATarget const & target) const {
// 	// This one will simply call the getHitBySpell of the passed object, passing the
// 	// current instance as parameter.
// 	target.getHitBySpell(*this);
// }