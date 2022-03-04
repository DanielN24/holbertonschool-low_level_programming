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
	int a, b, c = 0;

	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b]; b++)
		{
			if (argv[a][b] < '0' || argv[a][b] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		c = c + atoi(argv[a]);
	}
	printf("%d\n", c);
	return (0);
}
