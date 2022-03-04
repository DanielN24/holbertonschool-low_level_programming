#include <stdio.h>
/**
*main - program that prints the number of arguments passed into it
*@argc: The program name
*@argv: The number of command line arguments
*Return: always 0
*/
int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
		printf("%s\n", argv[a]);
	return (0);
}
