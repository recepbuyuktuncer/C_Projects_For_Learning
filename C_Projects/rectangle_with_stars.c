#include<stdio.h>
#include<stdlib.h>

int main () {

	int i,j, width, length;

	printf("Rectangle's Width: ");
	scanf("%d", &width);

	printf("Rectangle's Length: ");
	scanf("%d", &length);

	printf("Your Rectangle's Width And Length: %d %d\n", width, length);

	for(i=1;i<=width;i++)
	{
		for(j=1;j<=length;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
