//Program that list numbers between 1 and 50 that are divisible by 5
#include<stdio.h>
#include<stdlib.h>

int main () {

	int i;

	for(i=0;i<51;i++)
	{
		if(i %5 == 0 && i != 0)
		{
			printf("%d\n", i);
		}
	}

}
