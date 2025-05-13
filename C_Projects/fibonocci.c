#include<stdio.h>
#include<stdlib.h>

int main() {

	int i,fibonocci_counter;
	int fib, fib_1, fib_2; // fib: fibonocci number , fib_1 = fibonocci number 1 , fib_2 = fibonocci number 2

	fib_1 = 1;
	fib_2 = 0;

	printf("Fibonocci Counter Number: ");
	scanf("%d", &fibonocci_counter);

	for(i=1;i<=fibonocci_counter;i++)
	{
		fib = fib_1 + fib_2;
		fib_1 = fib_2;
		fib_2 = fib;
	}
	printf("Fibonocci Number: %d", fib);
}
