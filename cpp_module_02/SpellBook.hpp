#pragma once
#include <iostream>
#include <map>
#include "ASpell.hpp"

class SpellBook
{
    private:
        std::map <std::string, ASpell *> spellBook;
        
        SpellBook(const SpellBook &copy);
        SpellBook &operator=(const SpellBook &copy);
    public:
        SpellBook();
        ~SpellBook();
        void learnSpell(ASpell*);
        void forgetSpell(std::string const &spellName);
        ASpell* createSpell(std::string const &spellName);
};
