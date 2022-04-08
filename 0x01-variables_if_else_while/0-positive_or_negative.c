nclude <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
 * replaces a variable number an states whether
 * it is a positive, negative or zero.
 *
 * return- Always (0)
 */

int main(void)
{
		int n;

		srand(time(0));
		n = rand() - RAND_MAX / 2;

		if (n > 1)
		printf("%d is positive\n", n);
		else if (n < 0)
		printf("%d is negative\n", n);
		else

		prinf("%d is zero\n", n);

		return (0);
}
