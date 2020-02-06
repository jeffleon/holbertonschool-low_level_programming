#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
int n;
int nuevo;
srand(time(0));
n = rand() - RAND_MAX / 2;
nuevo = n % 10;
if (nuevo > 5)
printf("Last digit of %d is %d and is greater than 5\n", n , nuevo);
else if (nuevo < 6)
printf("Last digit of %d is %d and is less than 6 and not 0\n",n , nuevo);
else
printf("Last digit of %d is %d and and is 0\n",n, nuevo);
return (0);
}
