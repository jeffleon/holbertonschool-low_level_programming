#include <stdio.h>
#include <ctype.h>
/* more headers goes there */

/* betty style doc for function main goes there */
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
