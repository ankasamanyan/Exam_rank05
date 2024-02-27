#pragma once
#include <iostream>
#include "ATarget.hpp"

class ATarget;

class ASpell {

    protected:
        std::string name;
        std::string effects;

    public:
        ASpell(std::string name, std::string effects);
        virtual ~ASpell();
        const std::string &getName() const;
        const std::string &getEffects() const;
        virtual ASpell *clone() const = 0;
        ASpell(const ASpell &copy);
        ASpell  &operator=(const ASpell &copy);
        void launch(const ATarget &target) const;
};