#include "main.h"
/**
* _strstr - finds the first occurrence of needle in the haystack and return
* @haystack: pointer name.
* @needle: pointer name
* Return: a pointer to the beginning of the located substring
* or NULL if the substring is not found.
*/
char *_strstr(char *haystack, char *needle)
{
	unsigned int a, b;

	for (a = 0; haystack[a] != '\0'; a++)
	{
		for (b = 0; needle[b] != '\0'; b++)
		{
			if (needle[b] != haystack[a + b])
				break;
		}
		if (needle[b] == '\0')
			return (haystack + a);
	}
	return ('\0');
}
