#include "main.h"
/**
  *percent - printing % sign
  *
  *@d: percentage sign
  *
  *Return: 1 if true otherwise -1
  */
int percent(char d)
{
	d = '%';
	return (write(1, &d, 1));
}
