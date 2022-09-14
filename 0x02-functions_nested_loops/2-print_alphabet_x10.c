#include "main.h"
#include <stdio.h>
/**
 * print_alphabet_x10 - check the code.
 * Return: null.
 */
void print_alphabet_x10(void)
{
int alphabet, num;
num = 0;
while (num <= 9)
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
putchar(alphabet);
num++;
putchar('\n');
}
