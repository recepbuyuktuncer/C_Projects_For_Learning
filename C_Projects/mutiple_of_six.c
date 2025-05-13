#include<stdio.h>
#include<stdlib.h>

int main () {

	int x;

	printf("Enter Your Number: ");
	scanf("%d", &x);

	if(x%2==0 && x%3==0)
	{
		printf("Your Number Is Multiple of Six");
	}
	else
	{
		printf("Your Number Is Not Multiple of Six");
	}
}
