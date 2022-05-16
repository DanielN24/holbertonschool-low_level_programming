#include "main.h"
/**
*_strlen - returns the length of a string
*@s: variable name
*Return: the length of a string
*/
int _strlen(char *s)
{
	int a = 1;
	int b = 0;
	char c = s[0];

	while (c != '\0')
	{
	b++;
	c = s[a++];
	}
	return (b);
}
