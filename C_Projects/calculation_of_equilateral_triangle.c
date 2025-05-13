#include<stdio.h>
#include<stdlib.h>

int main() {
	int side_of_triangle, height_of_triangle, area_of_triangle, perimeter_of_triangle;

	printf(" Triangle's Side of Length: ");
	scanf("%d", &side_of_triangle);

	printf(" Triangle's Height: ");
	scanf("%d", &height_of_triangle);

	printf("Area of Triangle: %d\nPerimeter of Triangle: %d", side_of_triangle*3, (side_of_triangle*height_of_triangle)/2 );
}
