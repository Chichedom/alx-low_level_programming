#include "main.h"
#include <stdio.h>


/**
 * jack_bauer - this is a function that prints every minute of the day.
 * h = hour, m = minutes
 * Return: Always 0.
 */
void jack_bauer(void)
{
int h, m;
for (h = 0; h < 24; h++)
for (m = 0; m < 60; m++)
putchar((h / 10) + '0');
putchar((h % 10) + '0');
putchar(':');
putchar((m / 10) + '0');
putchar((m % 10) + '0');
putchar('\n');
}
