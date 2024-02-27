#include "ASpell.hpp"

ASpell::ASpell(std::string name, std::string effects)
{
    this->name = name;
    this->effects = effects;
}

ASpell::~ASpell(){}

const std::string &ASpell::getName() const
{
    return (name);
}

const std::string &ASpell::getEffects() const
{
    return (effects);
}

ASpell  &ASpell::operator=(const ASpell &copy)
{
    name = copy.name;
    effects = copy.effects;
    return *this;
}

ASpell::ASpell(const ASpell& copy)
{
    *this = copy;
}

void ASpell::launch( ATarget const &target) const
{
    target.getHitBySpell(*this);
}
