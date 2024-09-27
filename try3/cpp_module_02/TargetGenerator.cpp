#include "TargetGenerator.hpp"



TargetGenerator const & TargetGenerator::operator=(TargetGenerator const & obj){

	return *this;
}
TargetGenerator::TargetGenerator(TargetGenerator const & obj){
	*this = obj;
}

TargetGenerator::TargetGenerator() {

	// int i = 0;
	// while (i < 100) {
	// 	_spellName[i] = "";
	// 	_spellPtr[i] = nullptr;
	// 	i++;
	// }


}
TargetGenerator::~TargetGenerator(){


}


void TargetGenerator::learnTargetType(ATarget * spell) {

	int i = 0;
	while (i < 100) {
		if (_spellName[i] == "")
		{
			_spellName[i] = spell->getType();
			_spellPtr[i] = spell->clone();
			return ;
		}
		i++;
	}

}
void TargetGenerator::forgetTargetType(std::string const & spellName) {

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
ATarget * TargetGenerator::createTarget(std::string const & spellName) {
	int i = 0
	
	ATarget * tmp = NULL;

	while (i < 100) {
		if (_spellName[i] == spellName)
		{
			tmp = _spellPtr[i];
		}
		i++;
	}
	return tmp;
}