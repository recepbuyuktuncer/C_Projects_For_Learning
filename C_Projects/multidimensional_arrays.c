#include<stdio.h>
#include<stdlib.h>

int main () {

	int row, column, j, k, m, l;

	printf("Row: ");
	scanf("%d", &row);

	printf("Column: ");
	scanf("%d", &column);

	int matrix[row][column];

	for(j=0;j<row;j++)
	{
		for(k=0;k<column;k++)
		{
			printf("[%d][%d] ---> ", j+1, k+1);
			scanf("%d", & matrix[j][k]);
		}
	}
	printf("Your Array: \n");
	for(m=0;m<row;m++)
	{
		printf("            ");
		for(l=0;l<column;l++)
		{
			printf("%d ", matrix[m][l]);
		}
		printf("\n");
	}
}
