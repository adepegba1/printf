#include "main.h"

/**
  *print_char - print the character for the specifier c
  *
  *@c: character entered
  *Return: 1 if true or -1 otherwise
  */
int printChar(char c)
{
	return (write(1, &c, 1));
}
