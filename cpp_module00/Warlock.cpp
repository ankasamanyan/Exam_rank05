#include "Warlock.hpp"

/* constructors */
Warlock::Warlock()
{
	_name = "Warlock";
	_title = "no title";
	std::cout << _name << ": This looks like another boring day." << std::endl;
}

Warlock::Warlock(const std::string &name, const std::string &title)
{
	_name = name;
	_title = title;
	std::cout << _name << ": This looks like another boring day." << std::endl;
}

Warlock	&Warlock::operator=(const Warlock &copy)
{
	_name = copy._name;
	_title  = copy._title;
	return(*this);
}

Warlock::Warlock(const Warlock &copy)
{
	*this = copy;
}

Warlock::~Warlock()
{
	std::cout << _name << ": My job here is done!" << std::endl;
}

/* getters */
std::string	Warlock::getName() const
{
	return(_name);
}

std::string	Warlock::getTitle() const
{
	return(_title);
}
/* setters */
void	Warlock::setTitle(const std::string &title)
{
	_title = title;
}
/* functions */
void Warlock::introduce() const
{
	/* <NAME>: I am <NAME>, <TITLE>! */
	std::cout << getName() <<  ": I am " << getName();
	std::cout << ", " << getTitle() << "!" << std::endl;
}