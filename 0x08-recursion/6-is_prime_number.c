#include "main.h"
/**
*prime_number - input integer is a prime number
*@a: variable name
*@b: variable name
*Return: returns 1 if the input integer is a prime number, otherwise return 0
*/
int prime_number(int a, int b)
{
	if (a % b == 0 && b != a)
		return (0);
	if (a % b == 0 && b == a)
		return (1);
	return (prime_number(a, b + 1));
}
/**
*is_prime_number - input integer is a prime number
*@n: variable name
*Return: returns 1 if the input integer is a prime number, otherwise return 0
*/
int is_prime_number(int n)
{
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (prime_number(n, 2));
}
