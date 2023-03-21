#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - jack_bauer
 *
 * Return: 0 (SUCCESS)
 */
void jack_bauer(void)
{
	int	h;
	int	m;

	h = 0;
	while (h < 24)
	{
		m = 0;
		while (m < 60)
		{
			if (m < 10 && h >= 10)
				printf("%d:0%d\n", h, m);
			else if (h < 10 && m < 10)
				printf("0%d:0%d\n", h, m);
			else if (h < 10 && m >= 10)
				printf("0%d:%d\n", h, m);
			else
				printf("%d:%d\n", h, m);
			m++;
		}
		h++;
	}
}
