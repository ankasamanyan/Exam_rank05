#include <iostream>

class Warlock 
{
    private:
        std::string     name;
        std::string     title;
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

};