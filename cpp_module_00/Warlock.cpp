
#include "Warlock.hpp"

Warlock::Warlock(std::string name, std::string title) 
{
    this->name = name;
    this->title = title;
    std::cout << name << ": This looks like another boring day." << std::endl;

}

Warlock::Warlock(){}

Warlock::~Warlock()
{
    std::cout << name << ": My job here is done!" << std::endl;
}
Warlock &Warlock::operator=(const Warlock &copy)
{
    name = copy.name;
    title = copy.title;

    return( *this);
}

Warlock::Warlock(const Warlock &copy)
{
    (*this) = copy;
}

const std::string &Warlock::getName() const
{
    return(name);
}

const std::string &Warlock::getTitle() const
{
    return(title);
}

void Warlock::setTitle(const std::string &str)
{
    title = str;
}

void Warlock::introduce() const
{
    std::cout << this->name << ": I am " << this->name << ", " << this->title  << "!"<< std::endl;
}