#include<stdio.h>
#include<stdlib.h>

int main() {

	int numbers[100];
	int i, size, sum;

	sum=0;

	printf("Enter Your Array Size: ");
	scanf("%d", &size);

	for(i=0;i<size;i++)
	{
		printf("Enter Your Number for Array %d: ", i+1);
		scanf("%d", &numbers[i]);
	}

	for(i=0;i<size;i++)
	{
		printf("%d ", numbers[i]);
	}

	//Sum of Array

	for(i=0;i<size;i++)
	{
		sum = sum + numbers[i];
	}

	printf("\nSum of Array: %d ", sum);
	printf("\nAverage of Array: %d ", sum/size);

	// Average of Array

}
