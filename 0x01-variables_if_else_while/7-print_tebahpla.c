#include <stdio.h>
/**
 * main - main function
 * Return: always 0
*/
int main(void)
{
	char alphabet;

	for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
		putchar (alphabet);

	putchar('\n');

	return (0);
}
