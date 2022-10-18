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
	int count = 0, i, a;

	va_list(arg);
	va_start(arg, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		va_arg(arg, int);
		while (format[i] != '%')
		{
			putchar(format[i]);
			i++;
		}
		i++;

		switch (format[i])
		{
			case 'c':
				a = va_arg(arg, int);
				printChar(a);
				break;

			case '%':
				a = va_arg(arg, int);
				percent(a);
				break;
		}
		count++;
	}
	va_end(arg);
	return (count);
}
