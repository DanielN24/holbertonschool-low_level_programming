#include <stdio.h>
/**
 * main - print the number
 * Return: always 0
*/
int main(void)
{
	int numbers;

	for (numbers = 0 ; numbers <= 10; numbers++)
		putchar(numbers);

	putchar ('\n');

	return (0);
}
