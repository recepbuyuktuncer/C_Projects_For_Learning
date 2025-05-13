#include<stdio.h>
#include<stdlib.h>

int main () {

	int i, factorial, factorial_counter;
	i = 1;
	factorial_counter = 1;

	printf("Your Factorial Number: ");
	scanf("%d", &factorial);

	while(i<=factorial)
	{
		factorial_counter = factorial_counter*i;
		i++;
	}

	printf("Result of Factorial Operation: %d ", factorial_counter);
}
