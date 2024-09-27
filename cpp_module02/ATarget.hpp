#pragma once
#define ATARGET_HPP

#include <iostream>
#include "ASpell.hpp"

class ASpell;

class ATarget {
	
	private: 

		std::string _type;
	
	public:
		virtual ~ATarget();
		ATarget(std::string type);
		ATarget & operator=(ATarget const & obj);
		ATarget(ATarget const & obj);

		std::string const & getType() const;
		// std::string getEffects();
		virtual ATarget * clone() const = 0;
		void getHitBySpell(ASpell const & spell) const;

};