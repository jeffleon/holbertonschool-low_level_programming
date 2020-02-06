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
putchar(alphabeto[i]);
for (i = 0; i < 26; i++)
putchar(toupper(alphabeto[i]));
putchar('\n');
return (0);
}
