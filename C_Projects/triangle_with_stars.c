#include<stdio.h>
#include<stdlib.h>

int main()
{

int i,j,s,rows;
	printf("Enter the rows: ");
	scanf("%d",&rows);
	for(i=1;i<=rows;i++)
	{
		for(s=1;s<=(rows-i);s++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("* ");         // yıldızın yanında bir boşluk var.//
		}
		printf("\n");
	}

}
