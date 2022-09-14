#ifndef SPAN_HPP
# define SPAN_HPP
# include <iostream>
# include <algorithm>
# include <vector>
# include <list>
# include <map>

class Span {
public:
	Span(unsigned int n);
	Span(Span const & other);
	~Span();

	Span & operator=(Span const & other);

	class	fullException : public std::exception {
		virtual const char * what() const throw();
	};

	class	notEnoughException : public std::exception {
		virtual const char * what() const throw();
	};

	int		shortestSpan();
	int		longestSpan();
	void	addNumber(int num);
	void	addNumber(int num, int amount);
	void	printValue();

private:

	int	_maxStored;
	int _nowStored;
	std::vector<int> _numbers;
};


#endif