#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - print_alphabet
 *
 * Return: 0 (SUCCESS)
 */

void print_alphabet(void)
{
	char	a = 'a';

	while (a <= 'z')
		putchar(a++);
	putchar('\n');
}
