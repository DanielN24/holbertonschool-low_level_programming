#include <stdio.h>
/**
 * main - main function
 * Return: always 0.
*/
int main(void)
{
	char low, upper;

	for (low = 'a'; low <= 'z'; low++)
	putchar(low);

	for (upper = 'A'; upper <= 'Z'; upper++)
	putchar(upper);

	putchar ('\n');

	return (0);
}
