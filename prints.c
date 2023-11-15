#include "main.h"
#include <stdlib.h>

/**
 * prints - prints a string
 * @val: str
 * 
 * Return: num
 */

int prints(va_list val)
{
	char *str;
	int len, i;

	str = va_arg(val, char *);

	if (str == NULL)
	{
		str = "(null)";

		for (i = 0; i < 6; i++)
			_putchar(str[i]);

		return (6);
	}

	else
	{
		for (len = 0; str[len] != 0; len++)
			;
		for (i = 0; i < len; i++)
		{
			_putchar(str[i]);
		}
		return (len);	
	}
}
