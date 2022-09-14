#include "main.h"
#include <stdio>

/**
 * print_sign - function prints the sign of a number whether +, 0 or -.
 * @n: The number of which the sign will be printed.
 * Return: 1 if the number is greater than zero,
 *         0 if the number is zero,
 *         -1 if the number is less than zero.
 */

int print_sign(int n)

{
if (n == 0)
putchar('0');
return (0);
else if (n > 0)
putchar('+');
return (1);
else
putchar('-');
return (-1);
}
