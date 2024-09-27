#pragma once

#include <iostream>
#include "ASpell.hpp"

class ASpell;

class ATarget {
	private:
		std::string _type;
		ATarget();
		ATarget(ATarget const &);
		ATarget const & operator=(ATarget const &);

	public:
		ATarget(std::string type);

		virtual ~ATarget();
		std::string const & getType() const;
		virtual ATarget * clone() = 0;
		void getHitBySpell(ASpell const & spell) const;
};