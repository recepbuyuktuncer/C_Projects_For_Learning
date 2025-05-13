#include<stdio.h>
#include<stdlib.h>

int main (){

	char initial_letter;

	printf("Enter Your Lesson Initial Letter: ");
	scanf("%s", &initial_letter);

	switch(initial_letter)
	{
	case 't': printf("Turkish"); 		break;
	case 'm': printf("Math");			break;
	case 's': printf("Social Studies");	break;
	case 'f': printf("Science");		break;
	default: printf("Invalid Letter");	break;
	}

}
