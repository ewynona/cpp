#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP
# include "Form.hpp"

class PresidentialPardonForm : public Form {
public:
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(PresidentialPardonForm const & other);
	virtual ~PresidentialPardonForm();

	PresidentialPardonForm & operator=(PresidentialPardonForm const & other);

	void execute(Bureaucrat const & executor) const;

private:

	std::string	_target;
};


#endif
