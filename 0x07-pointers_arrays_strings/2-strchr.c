#include "main.h"
/**
*_strchr - function that locates a character in a string
*@s: pointer name
*@c: variable name
*Return: a pointer to the first occurrence of the character c in the string s
*NULL if the character is not found
*/
char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return ('\0');
}
