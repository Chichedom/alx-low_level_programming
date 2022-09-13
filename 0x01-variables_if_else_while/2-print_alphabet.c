#include <stdio.h>
/**
 * File: 2-print_alphabet.c
 * Author: Chedom
 * main - This function prints the alphabet in lowercase.
 */

int main(void)
{  
char letter;
for (letter = 'a'; letter <= 'z'; letter++);    
putchar(letter);  
putchar('\n');  
return (0); 
}
