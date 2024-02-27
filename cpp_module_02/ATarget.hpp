#pragma once
#include <iostream>
#include "ASpell.hpp"


class ASpell;

class ATarget {

    private:
        std::string type;

    public:
        ATarget(std::string type);
        ATarget(const ATarget &copy);
        ATarget &operator=(const ATarget &copy);
        virtual ~ATarget();
        virtual ATarget *clone() const = 0;
        const std::string &getType();
        void getHitBySpell(ASpell const &spell) const;

};