#include "main.h"
#include <stdarg.h>

/**
  *_printf - own personal printf
  *
  *@format: the string entered
  *
  *Return: number of string
  */
int _printf(const char *format, ...)
{
	int count, i;
	const char *str;

	va_list(arg);
	va_start(arg, format);

	for (str = format; *str != '\0'; str++)
	{
		count = va_arg(arg, int);
		while (*str != '%')
		{
			write(1, &*str, 1);
			str++;
		}
		str++;

		switch (*str)
		{
			case 'c':
				i = va_arg(arg, int);
				print_char(i);
				break;

			case '%':
				i = va_arg(arg, int);
				percent(i);
				break;
		}
		count++;
	}
	va_end(arg);
	return (count);
}
