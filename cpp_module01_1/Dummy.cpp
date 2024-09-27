#include "Dummy.hpp"

// Dummy::Dummy(Dummy const & obj) {
// 	*this = obj;
// }
// Dummy & Dummy::operator=(Dummy const & obj) {
// 	_name = obj.getName();
// 	_effects = obj.getEffects();
// 	return *this;
// }
Dummy::Dummy() : ATarget("Target Practice Dummy")  {}

Dummy::~Dummy() {}

Dummy * Dummy::clone() {
	return new Dummy();
}

// std::string Dummy::getName() const {
// 	return _name;
// }
// std::string Dummy::getEffects() const {
// 	return _effects;
// }


// void Dummy::launch(ATarget const & target) const {
// 	// This one will simply call the getHitBySpell of the passed object, passing the
// 	// current instance as parameter.
// 	target.getHitBySpell(*this);
// }