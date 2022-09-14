#include "main.h"
#include <stdio.h>
/**
 * main - check the code.
 * Return: null.
 */
void print_alphabet_x10(void)
{
char alphabet;
int num = 0;
while (num++ <= 9)
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
putchar(alphabet);
putchar('\n');
}
