#include<stdio.h> // && ve operatörü , || veya operatörü
#include<stdlib.h>

int main () {

	int x;

	printf("Input: ");
	scanf("%d", &x);

	if(x%2==0)
	{
		printf("Your Input Is Even Number");
	}
	else
	{
		printf("Your Input Is Odd Number");


	}
}
