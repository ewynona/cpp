#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>
# include <exception>

class Bureaucrat {
public:
	Bureaucrat(std::string name, int grade);
	Bureaucrat(Bureaucrat const & other);
	virtual ~Bureaucrat();

	Bureaucrat & operator=(Bureaucrat const & other);

	std::string	getName() const;
	int			getGrade() const;

	void		incGrade();
	void		decGrade();

	class GradeTooHighException : public std::exception {
		const char *what() const throw();
	};
	class GradeTooLowException : public std::exception {
		const char *what() const throw();
	};

private:

	std::string	_name;
	int			_grade;
	int			_maxGrade;
	int			_minGrade;

};

std::ostream & operator<<(std::ostream &out, Bureaucrat const &src);

#endif