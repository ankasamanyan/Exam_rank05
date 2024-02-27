#include <iostream>
#include <map>
#include "ASpell.hpp"
#include "ATarget.hpp"

class ASpell;
class ATarget;

class Warlock 
{
    private:
        std::string                      name;
        std::string                      title;
        std::map <std::string, ASpell *> spellBook;
        Warlock();
        Warlock(const Warlock &copy);
        Warlock &operator=(const Warlock &copy);

    public:
        Warlock(std::string name , std::string title);
        void setTitle(const std::string &title);
        void introduce() const;
        ~Warlock();

        const std::string &getName() const; 
        const std::string &getTitle() const;
        void learnSpell(ASpell *spell);
        void forgetSpell(std::string spellName);
        void launchSpell(std::string spellName, const ATarget &target);
        
};