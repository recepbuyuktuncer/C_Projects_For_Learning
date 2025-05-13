#include<stdio.h>
#include<stdlib.h>

int main() {

	int i,j, k, m;

	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		for(k=1;k<=10-2*i;k++)
		{
			printf(" ");
		}
		for(m=1;m<=i;m++)
		{
			printf("*");
		}

		printf("\n");
	}
	for(i=5;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		for(k=1;k<=10-2*i;k++)
		{
			printf(" ");
		}
		for(m=1;m<=i;m++)
		{
			printf("*");
		}
		printf("\n");
	}
}
