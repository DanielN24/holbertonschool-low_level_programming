#include "main.h"
/**
 * _strncpy - copiesa string, with at most n bytes from src
 * @dest: Pointer to destination string
 * @src: Pointer to source string
 * @n: Bytes to take from src
 * Return: Pointer to resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int lensrc;
	int lendest;
	int i;

	lensrc = _strlen(src);
	lendest = _strlen(dest);
	i = 0;
	while (i < n && i < lendest)
	{
		if (*(dest + i) != '\0' && i < lensrc)
			*(dest + i) = *(src + i);
		else
			*(dest + i) = '\0';
		i++;
	}
	return (dest);
}
