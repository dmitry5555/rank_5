#pragma once

#include <iostream>
#include "ATarget.hpp"

class ATarget;
class ASpell;

class TargetGenerator {

	private:
		std::string _spellName[100];
		ATarget * _spellPtr[100];
		// std::string _name;
		// std::string _effects;
		TargetGenerator & operator=(TargetGenerator const & obj);
		TargetGenerator(TargetGenerator const & obj);

	public:
		TargetGenerator();

		// std::string getName() const;
		// std::string getEffects() const;
		// virtual TargetGenerator * clone() = 0;
		~TargetGenerator();
		void learnTargetType(ATarget *);
		void forgetTargetType(std::string const & spell);
		ATarget *  createTarget(std::string const spell);
		// void launch(ATarget const & target) const;
};