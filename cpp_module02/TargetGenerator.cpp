#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator(){}

TargetGenerator::TargetGenerator(TargetGenerator const & obj){
	*this = obj;
}

TargetGenerator & TargetGenerator::operator=(TargetGenerator const & obj)
{
	int i = 0;
	while ( i < 100)
	{
		_targetType[i] = obj._targetType[i];
		_targetPtr[i] = obj._targetPtr[i]->clone();
		i++;
	}
	return *this;
}

TargetGenerator::~TargetGenerator(){}

void TargetGenerator::learnTargetType(ATarget* ptr)
{
	int i = 0;
	while ( i < 100)
	{
		if (_targetType[i] != "")
		{
			_targetType[i] = ptr->getType();
			_targetPtr[i] = ptr->clone();
			return ; 
		}
		i++;
	}
	
}

void TargetGenerator::forgetTargetType(std::string const & str)
{
// that deletes a spell from the book, except
// if it isn't there
	int i = 0;
	while ( i < 100)
	{
		if (_targetType[i] == str)
		{
			_targetType[i] = "";
			_targetPtr[i] = nullptr;
			return ; 
		}
		i++;
	}

}

ATarget* TargetGenerator::createTarget(std::string const & str)
{
	ATarget * tmp = NULL;

	int i = 0;
	while ( i < 100)
	{
		if (_targetType[i] == str)
		{
			tmp = _targetPtr[i];
			return tmp;
		}
		i++;
	}
	return tmp;
}

