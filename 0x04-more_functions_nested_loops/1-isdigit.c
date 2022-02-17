#include "main.h"
/**
 *_isdigit - function that checks for a digit 0 through 9
 *Return: 1 if c >= 0 y c <= 9 if not return 0
 *@c: c is a integral
*/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
