#pragma once
#include <iostream>
#include <map>
#include "ATarget.hpp"

class TargetGenerator
{
    private:
        std::map <std::string, ATarget *> target;
        
        TargetGenerator(const TargetGenerator &copy);
        TargetGenerator &operator=(const TargetGenerator &copy);
    public:
        TargetGenerator();
        ~TargetGenerator();
        void learnTargetType(ATarget*);
        void forgetTargetType(std::string const &targetName);
        ATarget* createTarget(std::string const &targetName);
};
