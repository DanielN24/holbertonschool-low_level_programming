#include "main.h"
/**
 * _isalpha - check if c is lower or uppercase
 * @c: letter
 * Return: 1 if c is lower 0 if not
*/
int _isalpha(int c)
{

	if ((c >= 'a' && <= 'z') || (c >= 'A' && <= 'Z'))
		return (1);
	else
		return (0);
}
