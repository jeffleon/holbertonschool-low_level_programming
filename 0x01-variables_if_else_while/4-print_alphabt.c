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
char alphabeto[] = "abcdefghijklmnopqrstuvwxyz";
for (i = 0; i < 26; i++)
{
if (alphabeto[i] != 'q' && alphabeto[i] != 'e')
putchar(alphabeto[i]);
}
putchar('\n');
return (0);
}
