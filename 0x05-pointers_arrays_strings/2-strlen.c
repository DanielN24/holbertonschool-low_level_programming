#include "main.h"
/**
*_strlen - returns the length of a string
*@s: variable name
*Return: the length of a string
*/
int _strlen(char *s)
{
	int a = 0;

	while (s[0] != '\0')
	a++;
	return (a);
}
