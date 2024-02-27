#include "SpellBook.hpp"

SpellBook::SpellBook()
{
}

SpellBook::~SpellBook()
{
}

SpellBook &SpellBook::operator=(const SpellBook &copy)
{
    this->spellBook = copy.spellBook;
    return *this;
}

SpellBook::SpellBook(const SpellBook &copy)
{
    *this = copy;
}

void SpellBook::learnSpell(ASpell *spell)
{
    if(spell)
    {
        if(this->spellBook.find(spell->getName()) == this->spellBook.end())
            this->spellBook[spell->getName()] = spell->clone();
    }
}

void SpellBook::forgetSpell(std::string const &spellName)
{
    if(this->spellBook.find(spellName) != this->spellBook.end())
        this->spellBook.erase(this->spellBook.find(spellName));
}

ASpell* SpellBook::createSpell(std::string const &spellName)
{
    ASpell *tmp = NULL;
    if(this->spellBook.find(spellName) != this->spellBook.end())
        tmp = this->spellBook[spellName];
    return tmp;
}
