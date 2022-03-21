#include "main.h"
#include <stdio.h>

void swap_int(int *a, int *b);
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
int main(void)
{
	int a, b;

	_putchar("Enter value of a %d", &a);
	_putchar("Enter value of b %d", &b);
	swap(&a, &b);
	return (0);

}
