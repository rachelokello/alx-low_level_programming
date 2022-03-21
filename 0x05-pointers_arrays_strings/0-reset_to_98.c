#include "main.h"
#include <stdio.h>

/**
 * main - prints a function pointer
 *
 * Return: always 0
 */
void fun(int n)
{
	_putchar("value of n is %d\n", n);
}
int main(void)
{
	void (*fun_ptr)(int) = fun;

	fun_ptr(98);

	return (0);
}
