#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
*op_add - function that add a + b
*@a: first number
*@b: second number
*Return: a+b
*/
int op_add(int a, int b)
{
	return (a + b);
}
/**
*op_sub - function that add a + b
*@a: first number
*@b: second number
*Return: a-b
*/
int op_sub(int a, int b)
{
	return (a - b);
}
/**
*op_mul - function that add a + b
*@a: first number
*@b: second number
*Return: a*b
*/
int op_mul(int a, int b)
{
	return (a * b);
}
/**
*op_div - function that add a + b
*@a: first number
*@b: second number
*Return: a/b
*/
int op_div(int a, int b)
{
	return (a / b);
}
/**
*op_mod  - function that add a + b
*@a: first number
*@b: second number
*Return: a%b
*/
int op_mod(int a, int b)
{
	return (a % b);
}
