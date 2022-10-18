#include "main.h"
#include <stdio.h>
/**
  *string - for thr specifier for string character
  *
  *@s: the string entered
  *
  *Return: print the string out
  */
int string_length(char *s)
{
	int len = 0;
	while (*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}

