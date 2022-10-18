#include "main.h"
#include <stdio.h>


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
			putchar(*str);
			str++;
		}
		str++;

		switch (*str)
		{
			case 'c':
				i = va_arg(arg, int);
				printChar(i);
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
