#include "ATarget.hpp"

ATarget::ATarget(ATarget const & obj) {
	*this = obj;
}
ATarget & ATarget::operator=(ATarget const & obj) {
	_type = obj.getType();
	return *this;
}
ATarget::ATarget(std::string type) : _type(type)  {}

ATarget::~ATarget() {}

std::string const & ATarget::getType() const {
	return _type;
}

void ATarget::getHitBySpell(ASpell const & spell) const {
// <TYPE> has been <EFFECTS>!
	std::cout << _type << " has been "  << spell.getEffects()  << "!"  << std::endl;
}
