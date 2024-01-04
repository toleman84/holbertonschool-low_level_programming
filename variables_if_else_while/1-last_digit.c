#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
    int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
    lastDigit = abs(n % 10);
    printf("Last digit of %d is %d and ", n, lastDigit);

    if (lastDigit > 5) {
        printf("is grater than 5");
    } else if (lastDigit == 0) {
        printf("is 0");
    } else {
        printf("is less than 6 and not 0");
    }
    printf("\n");
	return (0);
}
