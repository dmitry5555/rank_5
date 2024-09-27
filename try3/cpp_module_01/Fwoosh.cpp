#include "ASpell.hpp"
#include "Fwoosh.hpp"

// Fwoosh::Fwoosh(){}

Fwoosh::Fwoosh() : ASpell("Fwoosh","fwooshed")  {
}
Fwoosh::~Fwoosh(){
}

ASpell * Fwoosh::clone() {
	return new Fwoosh();
}