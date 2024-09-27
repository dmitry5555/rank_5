#include "ATarget.hpp"


ATarget::~ATarget(){}

ATarget::ATarget(std::string type) : _type(type)
{}

ATarget & ATarget::operator=(ATarget const & obj)
{
	_type = obj.getType();
	return *this;
}

ATarget::ATarget(ATarget const & obj)
{
	*this = obj;
}

std::string const & ATarget::getType() const
{
	return _type;
}

void ATarget::getHitBySpell(ASpell const & spell) const
{
// <TYPE> has been <EFFECTS>!
// <TYPE> is the ATarget's type, and <EFFECTS> is the return of the ASpell's
// getEffects function.
	std::cout << _type << " has been " << spell.getEffects() << "!" << std::endl;
}