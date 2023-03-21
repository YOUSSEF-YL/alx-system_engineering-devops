#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - print _putchar
 *
 * Return: 0 (SUCCESS)
 */
void print_alphabet_x10(void)
{
	int	a;
	int	i;

	i = 0;
	while (i != 10)
	{
		a = 97;
		while (a <= 'z')
			putchar(a++);
		putchar('\n');
		i++;
	}
}
