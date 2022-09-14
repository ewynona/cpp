#ifndef FIXED_HPP
# define FIXED_HPP
# include <string>
# include <iostream>
# include <ostream>
# include <cmath>

class Fixed {

public:
	Fixed();
	Fixed(const int num);
	Fixed(const float num);
	Fixed(const Fixed& src);
	~Fixed();

	Fixed&	operator= (const Fixed& src);
	int		getRawBits() const;
	void	setRawBits(int const raw);
	float	toFloat() const;
	int		toInt() const;

private:
	static const int	_fractional_bits;
	static const int	_exponent;
	int					_value;

};

std::ostream&	operator<< (std::ostream& out, const Fixed& src);

#endif