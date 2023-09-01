#pragma once

#include <iostream>
#include <string>

class Warlock
{
	private:
		std::string		_name;
		std::string		_title;

	public:
		/* constructors */
		Warlock();
		Warlock(const std::string &name, const std::string &title);
		Warlock	&operator=(const Warlock &copy);
		Warlock(const Warlock &copy);
		~Warlock();
		/* getters */
		std::string	getName() const;
		std::string	getTitle() const;
		/* setters */
		void	setTitle(const std::string &title);
		/* functions */
		void introduce() const;

};