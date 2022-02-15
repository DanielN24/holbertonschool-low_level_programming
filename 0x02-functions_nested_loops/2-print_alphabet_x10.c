#include "main.h"
/**
 * print_alphabet_x10 - alphabet x10
*/
void print_alphabet_x10(void)
{
	int alphax10;
	char alphax;

	alphax10 = 0;
	while (alphax10 < 10)
	{
	for (alphax = 'a'; alphax <= 'z'; alphax++)

	_putchar (alphax);
	alphax10++;
	_putchar ('\n');
	}
}
