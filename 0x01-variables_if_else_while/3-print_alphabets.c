#include <stdio.h>
#include <ctype.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
int i;
char alphabeto[] = "abcdefghijklmnopqrstuvwxyz";
for(i=0;i<26;i++)
putchar(alphabeto[i]);
for(i=0;i<26;i++)
putchar(toupper(alphabeto[i]));
putchar('\n');
return (0);
}
