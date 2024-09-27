#include "Warlock.hpp"

// Warlock::Warlock()

Warlock::Warlock(Warlock const & obj){
	*this = obj;
}

Warlock & Warlock::operator=(Warlock const & obj)
{
	_name = obj.getName();
	_title = obj.getTitle();
	return *this;
}
// creation
Warlock::Warlock(std::string name, std::string title) : _name(name), _title(title)
{
	int i = 0;
	while (i < 100)
	{
		_spellName[i] = "";
		_spellPtr[i] = nullptr;
		i++;
	}
	// <NAME>: This looks like another boring day.
	std::cout << _name << ": This looks like another boring day."<< std::endl;
}
// dies
Warlock::~Warlock(){
	// <NAME>: My job here is done!
	std::cout << _name << ": My job here is done!" << std::endl;

}

std::string const & Warlock::getTitle() const
{
	return _title;
}
std::string const & Warlock::getName() const
{
	return _name;	
}
void Warlock::setTitle(std::string const & str)
{
	_title = str;
}

void Warlock::introduce() const
{
// <NAME>: I am <NAME>, <TITLE>!
	std::cout << _name << ": I am " << _name << ", " << _title << "!" << std::endl;
}

void Warlock::learnSpell(ASpell * ptr)
{
	int i = 0;
	while ( i < 100)
	{
		if (_spellName[i] == "")
		{
			_spellName[i] = ptr->getName();
			_spellPtr[i] = ptr->clone();
			return ; 
		}
		i++;
	}
}
void Warlock::forgetSpell(std::string str)
{
	int i = 0;
	while ( i < 100)
	{
		if (_spellName[i] == str)
		{
			_spellName[i] = "";
			_spellPtr[i] = nullptr;
			return ; 
		}
		i++;
	}
}
void Warlock::launchSpell(std::string spell, ATarget const & target)
{
	int i = 0;
	while ( i < 100)
	{
		if (_spellName[i] == spell)
		{
			_spellPtr[i]->launch(target);
			return ; 
		}
		i++;
	}
}