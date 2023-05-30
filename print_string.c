#include "main.h"

/**
* print_string - prints strings
* @list: list of parameters
* Return: success
*/
int print_string(va_list list)
{
	int len = 0;
	char *str;

	str = va_arg(list, char *);

	if (str == NULL)
		str = "(nil)";

	while (str[len] != '\0')
	{
		write(1, &str[len], 1);
		len++;
	}

	return (len);
}
