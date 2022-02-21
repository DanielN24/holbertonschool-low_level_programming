#include "main.h"
/**
*swap_int - waps the values of two integers
*@a: is a variable
*@b: is a variable
*/
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
