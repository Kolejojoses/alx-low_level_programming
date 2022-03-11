#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Last digit
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int n, an;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	an = n % 10;
	if (an > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, an);
	else if (an == 0)
		printf("Last digit of %d is %d and is 0\n", n, an);
	else if (an != 0 && an < 6)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, an);
	return (0);
}
