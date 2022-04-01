#include <stdio.h>
/**
 * main - prints the number of arguments passed into it
 * @argc: number of command line arguments
 * @argv: array contains the progrgram command line arguments
 * Return: 0-success
 */
int main(int argc, char *argv[] _attribute_(unused))
{
	printf("%d\n", argc - 1);
	return (0);
}
