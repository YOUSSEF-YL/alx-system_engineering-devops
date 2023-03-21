#include<stdio.h>

/**
 * _isalpha - print _isalpha
 * @c: variable integer
 * Return: 0 (SUCCESS)
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
