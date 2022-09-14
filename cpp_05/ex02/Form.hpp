#ifndef FORM_HPP
# define FORM_HPP
# include <iostream>
# include <exception>
class Form;
# include "Bureaucrat.hpp"

class Form {
public:

	Form(std::string name, const int gradeToSign, const int gradeToExc);
	Form(Form const & other);
	~Form();

	Form & operator=(Form const & other);

	bool				getSign();
	int	const			getSignGrade() const;
	int	const			getExcGrade() const;
	std::string const	getName() const;

	virtual void execute(Bureaucrat const & executor) const = 0;
	void				beSigned(Bureaucrat const & bureaucrat);

	class GradeTooHighException : public std::exception {
		const char *what() const throw();
	};
	class GradeTooLowException : public std::exception {
		const char *what() const throw();
	};
	class FormSignedException : public std::exception {
		const char *what() const throw();
	};
	class FormUnsignedException : public std::exception {
		const char *what() const throw();
	};

private:
	std::string const _name;
	int	const		_gradeToSign;
	int	const		_gradeToExc;
	bool			_signed;

};

std::ostream & operator<<(std::ostream &out, Form const &src);

#endif