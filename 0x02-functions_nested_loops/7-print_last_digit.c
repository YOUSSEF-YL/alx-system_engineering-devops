
#include <stdio.h>
#include "main.h"
#include <limits.h>

/**
 * print_last_digit - print_last_digit
 * @r: variable integer
 * Return: 0 (SUCCESS)
 */
int print_last_digit(int r)
{
	int	res;

	if (r == INT_MIN)
	{
		_putchar('8');
		return (8);
	}
	if (r < 0)
		r *= -1;
	res = r % 10;
	_putchar(res + 48);
	return (res);
}