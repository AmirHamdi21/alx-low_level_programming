#include "main.h"

/**
 * main - check the code
 *
 * Description:  the program prints _putchar
 *
 * Return: Always 0 (Success)
 *
 */
void print_alphabet(void)/*Description: print_alphabet Prints the alphabet in lowercase, followed by a newline */
{
int c = 'a';
for (c = 'a'; c <= 'z'; c++)
_putchar(c);
_putchar('\n');

return;
}
