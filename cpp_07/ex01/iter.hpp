#ifndef ITER_HPP
# define ITER_HPP
# include <iostream>

template<typename T>
void iter(T **arr, int len, void (*f)(T a));

#endif