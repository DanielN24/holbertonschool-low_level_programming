#include <stdio.h>
#include <stdlib.h>
/**
*main - program that prints the number of arguments passed into it
*@argc: The program name
*@argv: The number of command line arguments
*Return: always 0
*/
int main(int argc, char *argv[])
{
	int a, b, c;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	c = a * b;
		printf("%d\n", c);
	return (0);
}
