#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry point
 * Description:user blabalabalabll
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
char hexadecimal[] = "0123456789abcdef";
for (i = 0; i < 16; i++)
putchar(hexadecimal[i]);
putchar('\n');
return (0);
}
