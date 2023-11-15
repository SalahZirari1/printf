#include "main.h"

/**
 * printc - prints a charachter
 * @val: values
 *
 *
 * Return: 1
 */

int printc(va_list val)
{
	char str;

	str =  va_arg (val, int);
	_putchar(str);

	return(1);
}
