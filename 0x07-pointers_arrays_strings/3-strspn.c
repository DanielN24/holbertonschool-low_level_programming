#include "main.h"
/**
*_strspn - function that gets the length of a prefix substring.
*@s: pointer name
*@accept: variable name
*Return: number of bytes in the initial segment of s
*/
unsigned int _strspn(char *s, char *accept)
{
	int a, b, c = 0;

	for (a = 0; accept[a] >= '\n'; a++)
	{
		for (b = 0; s[b] != ' '; b++)
		{
			if (accept[a] == s[b])
				c++;
		}
	}
	return (c);
}
