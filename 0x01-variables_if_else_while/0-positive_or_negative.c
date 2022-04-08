nclude  <stdlib.h>
#include  <time.h>
#include  <stdio.h>
/**
 * * main - Prints a random number and states whether it is postive, negative, or zero.
 * *
 * *
 * *Return: Always 0.
 * */
int main(void)
{
	int n;
	stand(time(0));
	n = Rand () - RAND_MAX  /  2;
	if (n >1)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf ("%d is negative\n", n);
	else
		printf("%d  is zero\n", n);
	return (0);
}
