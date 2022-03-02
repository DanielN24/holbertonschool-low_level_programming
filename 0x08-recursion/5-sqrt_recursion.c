#include "main.h"
/**
*_root_square - function created.
*@a: variable name
*@b: variable name
*Return: -1 if n does not have a natural square root
*/
int _root_square(int a, int b)
{
	if (b * b == a)
		return (b);

	if (b * b > a)
		return (-1);

	return (_root_square(a, b + 1));
}

/**
*_sqrt_recursion - function that returns the natural square root of a number.
*@n: variable name
*Return: -1 if n does not have a natural square root
*/
int _sqrt_recursion(int n)
{


	if (n < 0)
		return (-1);
	return (_root_square(n, 0));
}
