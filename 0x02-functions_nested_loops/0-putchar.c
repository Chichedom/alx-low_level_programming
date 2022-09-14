#include <stdio.h>
#include "main.h"
/**
 * main - this function prints "_putchar"
 * Return: Always 0.
 */


int main(void)
{
char *p  = "_putchar";
while (*p)
putchar (*p);
putchar(*p++);
putchar('\n');
return (0);
}
