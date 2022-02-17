#include "main.h"
/**
 * _isupper - check upper c
 * @c: letter
 * Return: 1 if c is uppercase 0 if not
*/
int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
