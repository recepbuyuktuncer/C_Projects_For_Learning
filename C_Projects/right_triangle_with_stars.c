#include<stdio.h>
#include<stdlib.h>

int main () {

	int i, run, height;

	printf("Rectangle's Height: ");
	scanf("%d", &height);

	printf("Your Right Triangle's Run And Height: %d %d\n", run, height);

	for(i=1;i<=height;i++)
	{
		for(run=1;run<=i;run++)
		{
			printf("*");
		}
		printf("\n");
	}
}
