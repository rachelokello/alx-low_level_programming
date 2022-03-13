#include <stdio.h>
/**
 * main - prints all possible combinations of two-digit numbers.
 *
 * Return: if runs successfully return 0
 */
int main(void)
{
	int i, e, g, h, kj1, kj2;

	i = e = g = h = 48;
	while (h < 58)
	{
		g = 48;
		while (g < 58)
		{
			e = 48;
			while (e < 58)
			{
				i = 48;
				while (e < 58)
				{
					kj1 = (h * 10) + g;
					kj2 = (e * 10) + i;
					if (kj1 < kj2)
					{
						putchar(h);
						putchar(g);
						putchar(' ');
		putchar(e);
		putchar(i);
		if (h == 57 && g == 56 && e == 57 && i == 57)
			break;
		putchar(',');
		putchar(' ');
					}
					i++;
				}
				e++;
			}
			g++;
		}
		h++;
	}
	putchar('\n');
	return (0);
}

	
