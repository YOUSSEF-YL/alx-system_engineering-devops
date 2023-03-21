#include <stdio.h>
#include "main.h"

/**
 * times_table - print times_table
 *
 * Return: 0 (SUCCESS)
 */
void times_table(void)
{
	int	i;
	int	j;
	int	x;

	i = 0;
	j = 0;
	x = 0;
	while (i < 10)
	{
		j = 0;
		x = 0;
		while (j < 10)
		{
			if (j == 0)
				printf("0,");
			else
			{
				x += i;
				if (x < 10)
				{
					if (j != 9)
						printf("  %d,",  x);
					else
						printf("  %d",  x);
				}
				else
				{
					if (j != 9)
						printf(" %d,",  x);
					else
						printf(" %d",  x);
				}
			}
			j++;
		}
		printf("\n");
		i++;
	}
}
