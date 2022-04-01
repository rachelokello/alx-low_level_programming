#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: number of command line arguments
 * @argv: array that contains the programm command line arguments
 * return: 0 - success
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		puts("Error");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	c = a * b;
	printf("%d\n", c);
	return (0);
}
