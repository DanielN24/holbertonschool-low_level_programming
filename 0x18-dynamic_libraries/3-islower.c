#include "main.h"
/**
 * _islower - check lower c
 * @c: letter
 * Return: 1 if c is lower 0 if not
*/
int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
