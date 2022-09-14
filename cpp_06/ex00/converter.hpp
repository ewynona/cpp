#ifndef CONVERTER_HPP
# define CONVERTER_HPP
# include <iostream>
# include <iomanip>
# include <cmath>
# define INT 1
# define CHAR 2
# define DOUBLE 3
# define FLOAT 4
# define ERROR 5

class Converter {
public:
	Converter(std::string str);
	Converter(Converter const & other);
	~Converter();

	Converter & operator=(Converter const & other);

	int		getType();

	void	typeInit();
	void	varInit();
	void	printInt();
	void	printFloat();
	void	printDouble();
	void	printChar();

private:
	int		_i;
	char	_c;
	float	_f;
	double	_d;

	bool	_checkInt;
	bool	_checkChar;
	int		_type;
	std::string	_str;
};


#endif
