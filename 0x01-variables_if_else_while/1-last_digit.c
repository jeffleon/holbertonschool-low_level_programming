#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Description:user blabalabalabll
 * Return: Always 0 (Success)
 */
int main(void)
{
int n, nuevo;
srand(time(0));
n = rand() - RAND_MAX / 2;
nuevo = n % 10;
if (nuevo > 5)
printf("Last digit of %d is %d and is greater than 5\n", n, nuevo);
else if (nuevo < 6)
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, nuevo);
else if (nuevo == 0)
printf("Last digit of %d is %d and and is 0\n", n, nuevo);
return (0);
}
