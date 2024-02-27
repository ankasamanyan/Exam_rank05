#include "ATarget.hpp"

ATarget::ATarget(std::string type) 
{
    this->type = type;
}

ATarget &ATarget::operator=(const ATarget &copy)
{
    this->type = copy.type;
    return *this;
}

ATarget::ATarget(const ATarget &copy)
{
    *this = copy;
}

ATarget::~ATarget(){}

const std::string &ATarget::getType()
{
    return(type);
}

void ATarget::getHitBySpell(const ASpell &spell) const
{
    std::cout << this->type << " has been "<< spell.getEffects() <<"!" << std::endl;
}
