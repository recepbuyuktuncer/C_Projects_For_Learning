#include<stdio.h>
#include<stdlib.h>

int main () {

	int water;

	printf("Water Tempature: ");
	scanf("%d", &water);

	if(water<=0)
	{
		printf("Water in solid form");
	}
	else if(water>0 && water<100)
	{
		printf("Water in liquid form");
	}
	else
	{
		printf("Water in gaseous form");
	}
}
