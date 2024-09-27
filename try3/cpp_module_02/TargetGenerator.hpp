#pragma once
#include <iostream>

#include "ASpell.hpp"
#include "ATarget.hpp"

class TargetGenerator {

	private:
		std::string _spellName[100];
		ATarget * _spellPtr[100];

		// TargetGenerator();
		TargetGenerator(TargetGenerator const &);
		TargetGenerator const & operator=(TargetGenerator const &);

	public:
		TargetGenerator();
		~TargetGenerator();

		void learnTargetType(ATarget * spell);
		void forgetTargetType(std::string const & spellName);
		ATarget * createTarget(std::string const & spell);
				
};