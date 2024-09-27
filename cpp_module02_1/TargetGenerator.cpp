#include "TargetGenerator.hpp"

// TargetGenerator::TargetGenerator(TargetGenerator const & obj) {
// 	*this = obj;
// }
// TargetGenerator & TargetGenerator::operator=(TargetGenerator const & obj) {

// 	return *this;
// }
TargetGenerator::TargetGenerator() {
	int i = 0;
	while (i < 100) {
		_spellName[i] = "";
		_spellPtr[i] = nullptr;
		i++;
	}
}
TargetGenerator::~TargetGenerator() {}

void TargetGenerator::learnTargetType(ATarget * ptr) {
	int i = 0;
	while (i < 100) {
		if (_spellName[i] == "")
		{
			_spellPtr[i] = ptr->clone();
			_spellName[i] = ptr->getType();
			return ;
		}
		i++;
	}
}

void TargetGenerator::forgetTargetType(std::string const & spell) {
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

ATarget * TargetGenerator::createTarget(std::string const spell) {
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

