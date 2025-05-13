#include<stdio.h>
#include<stdlib.h>

int main () {

	float long_side, short_side;

	printf("Long Side of Rectangel:");
	scanf("%f", &long_side);

	printf("Short Side of Rectangel:");
	scanf("%f", &short_side);

	printf("Area of Rectangel: %f\nPerimeter of Rectangel: %f", long_side*short_side, (long_side*2) + (short_side*2));

}
