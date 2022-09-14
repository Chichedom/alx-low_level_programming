#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - this function prints the last digit of a number
 * @nld: inputed number
 * Return: value of last digit
 */

int print_last_digit(int nld)
{
int ld;
ld = (nld % 10);
if (ld < 0)
ld = (-1 * ld);
putchar (ld + '0');
return (ld);
}
