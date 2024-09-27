#pragma once

#include <iostream>
#include "ASpell.hpp"

class ASpell;

class ATarget {

	protected:
		std::string _type;

	public:
		ATarget(ATarget const & obj);
		ATarget & operator=(ATarget const & obj);
		ATarget(std::string type);

		std::string const & getType() const;
		virtual ATarget * clone() = 0;
		virtual ~ATarget();
		void getHitBySpell(ASpell const & spell) const;
};