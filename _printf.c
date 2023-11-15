#include "main.h"
#include <stdarg.h>

/**
 * _printf - mimics printf
 * @format: format
 *
 * Return: number of charachters printed
 */

int _printf(const char *format, ...)
{
	va_list args;
	int count;

	count = 0;

	while (*format != '\0')
	{
		if (*format == '%' && *(format + 1) != '\0')
		{
			format++;
			switch (*format)
			{
				case 'c':
					count += printc(args);
					break;
				case 's':
					count += prints(args);
					break;
				case '%':
					count += printp();
					break;
				default:
					_putchar('%');
					count++;
					break;

			}
		}
		else
		{
			_putchar(*format);
			count++;
		}

		format++;
	}

	va_end(args);

	return (count);
}
