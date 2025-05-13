#include<stdio.h>
#include<stdlib.h>

int main (){

	int number1, number2, sum,subs,multp,div;

	printf("First Number: ");
	scanf("%d", &number1);

	printf("Second Number: ");
	scanf("%d", &number2);


	sum = number1 + number2; subs = number1 - number2; multp = number1*number2; div = number1 / number2;


	printf("Sum: %d\nSubstraction: %d\nMultplication: %d\nDivide: %d", sum, subs, multp, div);

}
