#include "Fwoosh.hpp"

Fwoosh::Fwoosh() : ASpell("Fwoosh", "fwooshed") 
{}

Fwoosh::~Fwoosh() {}

Fwoosh * Fwoosh::clone() {
	return new Fwoosh();
}

// std::string Fwoosh::getName() const {
// 	return _name;
// }
// std::string Fwoosh::getEffects() const {
// 	return _effects;
// }


// void Fwoosh::launch(ATarget const & target) const {
// 	// This one will simply call the getHitBySpell of the passed object, passing the
// 	// current instance as parameter.
// 	target.getHitBySpell(*this);
// }