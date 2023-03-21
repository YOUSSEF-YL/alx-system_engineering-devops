#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - print_to_98
 * @n: variable integer
 * Return: 0 (SUCCESS)
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d", 98);
	}
	else
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d", 98);
	}
	printf("\n");
}
