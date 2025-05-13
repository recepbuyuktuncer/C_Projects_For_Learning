//Program that separates 3 digit number into their digits
#include<stdio.h>
#include<stdlib.h>

int main () {

	int three_digit_number, a, b, c;

	printf("Enter Your Three Digit Number: ");
	scanf("%d", &three_digit_number);

	a = three_digit_number/100;
	b = (three_digit_number %100)/10;
	c = three_digit_number %10;

	printf("%d  %d  %d", a, b, c);
}
