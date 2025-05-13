// Faktoriyel Çarpım
#include<stdio.h>
#include<stdlib.h>

int main () {

	int number, i;
	int factorial = 1;

	printf("Number for Factorial Operation: ");
	scanf("%d", &number);

	for(i=1;i<=number;i++)
		{
			factorial = factorial*i;
		}
	printf("Factorial %d", factorial);
}
