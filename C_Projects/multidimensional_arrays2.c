#include<stdio.h>
#include<stdlib.h>

int main () {

	int row, column, j, k, m, l;

	printf("Row: ");
	scanf("%d", &row);

	printf("Column: ");
	scanf("%d", &column);

	int m1[row][column]; 											// 	m1 	: matrix 1
	int m2[row][column]; 											// 	m2 	: matrix 2
	int sum[row][column]; 											// 	sum : sum matrix

	printf("The elements of the Matrix 1 will be entered!\n");		// Info
	for(j=0;j<row;j++) 												// Starting the creation of the Matrix 1
	{
		for(k=0;k<column;k++)
		{
			printf("[%d][%d] ---> ", j+1, k+1);
			scanf("%d", & m1[j][k]);
		}
	}
	printf("Matrix 1: \n");
	for(m=0;m<row;m++)
	{
		printf("            ");
		for(l=0;l<column;l++)
		{
			printf("%d ", m1[m][l]);
		}
		printf("\n");
	}																// Finishing the creation of the Matrix 1

	printf("The elements of the Matrix 2 will be entered!\n");		// Info 2
	for(j=0;j<row;j++)  											// Starting the creation of the Matrix 2
	{
		for(k=0;k<column;k++)
		{
			printf("[%d][%d] ---> ", j+1, k+1);
			scanf("%d", & m2[j][k]);
		}
	}
	printf("Matrix 2: \n");
	for(m=0;m<row;m++)
	{
		printf("            ");
		for(l=0;l<column;l++)
		{
			printf("%d ", m2[m][l]);
		}
			printf("\n");
	}					 											// Finishing the creation of the Matrix 2

	printf("The elements of the Matrix Sum will be printed!\n");	// Info 3
	for(j=0;j<row;j++)												// Starting the creation of the Matrix Sum
	{
		for(k=0;k<column;k++)
		{
			sum[j][k] = m1[j][k] + m2[j][k];
		}
	}
	printf("Sum Matrix: \n");
	for(m=0;m<row;m++)
	{
		printf("            ");
		for(l=0;l<column;l++)
		{
			printf("%d ", sum[m][l]);
		}
		printf("\n");
	}
}

