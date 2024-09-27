#pragma once
#define TARGETGENERATOR_HPP
#include <iostream>
#include "ASpell.hpp"


class TargetGenerator {

	private:
		TargetGenerator(TargetGenerator const & obj);
		TargetGenerator & operator=(TargetGenerator const & obj);

		std::string _targetType[100];
		ATarget * _targetPtr[100];
	public:
		TargetGenerator();
		~TargetGenerator();
		void learnTargetType(ATarget*);
		void forgetTargetType(std::string const &);
		ATarget* createTarget(std::string const &);

};