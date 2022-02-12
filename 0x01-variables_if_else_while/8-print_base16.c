#include <stdio.h>
/**
 * main - main function
 * Return: always 0
*/
int main(void)
{
	char num, alp;

	for (num = '0'; num <= '9'; num++)
		putchar(num);
	for (alp = 'a'; alp <= 'f'; alp++)
		putchar(alp);

	putchar('\n');

	return (0);
}
