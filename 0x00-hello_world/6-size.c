#include <stdio.h>
/**
*main - Entry point
*
*Description: print text
*
*Return: 0
*/
int main(void)
{
int i;
char c;
float f;
printf("Size of a char: %lu byte(s)\n", sizeof(c));
printf("Size of an int: %lu byte(s)\n", sizeof(i));
printf("Size of a long int: %lu byte(s)\n", (long)sizeof(i));
printf("Size of a long long int: %lu byte(s)\n", (long long)sizeof(i));
printf("Size of a float: %lu byte(s)\n", sizeof(f));
return (0);
}
