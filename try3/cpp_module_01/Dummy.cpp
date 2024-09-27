#include "Dummy.hpp"
#include "ATarget.hpp"

// Dummy::Dummy(){}

Dummy::Dummy() : ATarget("Target Practice Dummy")  {
}

// Dummy::~Dummy(){
// }

ATarget * Dummy::clone() {
	return new Dummy();
}