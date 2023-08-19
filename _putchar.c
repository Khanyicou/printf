#include <stdio.h>
#include <stdlid.h>

/**
 * _printf - function my printf
 * @format: string with format to print
 *
 *Return: num of chars
 */
 int _printf(const char *format, ...)
{
	va_list args;
	int lenght = 0;

	if (format == NULL)
		RETURN (-1);

	va_start(args, format);

	lenght = _print_format(format, args);
	va_end(args);
	return (length);
}
