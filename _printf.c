#include "main.h"

/**
 * _printf - mimics printf
 * @format: format
 *
 * Return: number of charachters printed
 */

int _printf(const char *format, ...)
{
	int c;

	c = 0;
	while (*format != '\0')
	{
		_putchar(*format);
		format++;
		c++;
	}
	return (c);
}
