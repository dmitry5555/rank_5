#include "Warlock.hpp"

Warlock::Warlock(){}

Warlock const & Warlock::operator=(Warlock const & obj){
	_name = obj._name;
	_title = obj._title;
	return *this;
}
Warlock::Warlock(Warlock const & obj){
	*this = obj;
}

Warlock::Warlock(std::string name, std::string title) : _name(name), _title(title)  {
	// <NAME>: This looks like another boring day.
	std::cout << _name << ": This looks like another boring day." << std::endl;
}
Warlock::~Warlock(){
	// <NAME>: My job here is done!
	std::cout << _name << ": My job here is done!" << std::endl;

}

std::string const & Warlock::getName() const {
	return _name;
}
std::string const & Warlock::getTitle() const {
	return _title;
}
void Warlock::setTitle(std::string const & title) {
	_title = title;
}

void Warlock::introduce() const {
	// <NAME>: I am <NAME>, <TITLE>!
	std::cout << _name << ": I am " << _name << ", " << _title << "!" << std::endl;
}