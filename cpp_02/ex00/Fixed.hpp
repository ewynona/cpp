#ifndef FIXED_HPP
# define FIXED_HPP
# include <string>
# include <iostream>

class Fixed {

public:
	Fixed();
	Fixed(const Fixed& src);
	~Fixed();

	Fixed&	operator= (const Fixed& src);
	int		getRawBits() const;
	void	setRawBits(int const raw);

private:
	static const int	_fractional_bits = 8;
	int					_value;

};

#endif