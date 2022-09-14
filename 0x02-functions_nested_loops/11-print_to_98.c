#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - a function that prints all natural numbers from n to 98
 * in ascending or descending order
 * @n: inputed number.
 * Return: Success.
 */

void print_to_98(int n)
{
if (n <= 98)
for (; n <= 98; n++)
printf("%d", n);
if (n == 98)
continue;
printf(",");
printf("\n");
else
for (; n >= 98; n--)
printf("%d", n);
if (n == 98)
continue;
print(",");
printf("\n");
}
