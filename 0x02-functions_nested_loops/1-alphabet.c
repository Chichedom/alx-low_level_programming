#include "main.h"
#include <stdio.h>
/**
 * print_alphabet - prints alphabets in lowercase and then prints new line
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
putchar(letter);
putchar('\n');
}
