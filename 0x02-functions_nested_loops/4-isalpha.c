#include "main.h"
#include <stdio.h>
/**
 * _isalpha - function checks if input is an alphabet.
 * @c: The character input to be checked.
 * Return: 1 if character is a lowercase or uppercase alphabet, 0 if not.
 */

int _isalpha(int c)
{
if ((c >= 'A' && c <= 'Z')
|| (c >= 'a' && c <= 'z'))
putchar ('1');
else
putchar ('0');
}
