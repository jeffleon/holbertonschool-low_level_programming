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
char alfabeto[] = "abcdefghijklmnopqrstuvwxyz";
for (i = 25; i >= 0; i--)
putchar(alfabeto[i]);
putchar('\n');
return (0);
}
