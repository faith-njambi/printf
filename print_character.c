#include "main.h"

/**
 * print_char - print characters
 * @list: number of parameters
 * Return: success
 */
int print_char(va_list list)
{
	char c;

	c = (char)va_arg(list, int);
	write(1, &c, 1);
	return (1);
}
