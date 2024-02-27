#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator()
{
}

TargetGenerator::~TargetGenerator()
{
}

TargetGenerator &TargetGenerator::operator=(const TargetGenerator &copy)
{
    this->target = copy.target;
    return *this;
}

TargetGenerator::TargetGenerator(const TargetGenerator &copy)
{
    *this = copy;
}

void TargetGenerator::learnTargetType(ATarget *type)
{
    if(type)
    {
        if(this->target.find(type->getType()) == this->target.end())
            this->target[type->getType()] = type->clone();
    }
}

void TargetGenerator::forgetTargetType(std::string const &targetName)
{
    if(this->target.find(targetName) != this->target.end())
        this->target.erase(this->target.find(targetName));
}

ATarget* TargetGenerator::createTarget(std::string const &targetName)
{
    ATarget *tmp = NULL;
    if(this->target.find(targetName) != this->target.end())
    {
        tmp = this->target[targetName];
    }
    return tmp;
}
