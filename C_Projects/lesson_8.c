#include<stdio.h>
#include<stdlib.h>

int main () {

	int x;

	printf("X starter value: ");
	scanf("%d", &x);

	if (x>=50)
	{
		printf("New  Incrased X Value: ");
		scanf("%d", &x);
	}
	else
	{
		printf("New Reduces X Value: ");
		scanf("%d", &x);
	}

	printf("X Value is %d", x);

}
