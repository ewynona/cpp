#ifndef INTERN_HPP
# define INTERN_HPP
# include <iostream>
# include "Form.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern {
public:
	Intern();
	Intern(Intern const & other);
	virtual ~Intern();

	Intern & operator=(Intern const & other);

	Form *	makeForm(std::string formName, std::string const target) const;

	Form *	makePresidentialPardonForm(std::string const target) const;
	Form *	makeRobotomyRequestForm(std::string const target) const;
	Form *	makeShrubberyCreationForm(std::string const target) const;

private:
	static const std::string _actions[3];
};


#endif
