#include <stdio.h>

/**
 * print_diagonal - Short description
 * @n: Variable
 * Return: Always 0 (Success)
 */

int main(){

int num;

for (num = 1; num <= 100; num++){

if (num % 3 == 0) {printf("Fizz");}

else if (num % 5 == 0){printf("Buzz");}

else if (num % 3 == 0 && num % 5 == 0){printf("FizzBuzz");}

else {printf("%d", num);}

}

return (0);
}
