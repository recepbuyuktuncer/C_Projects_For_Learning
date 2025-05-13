// A program that writes the result of the operation according to the operation entered from the keyboard
#include<stdio.h>
#include<stdlib.h>

int main () {

	int n1 , n2 , eq; // n1 : number 1, n2 : number 2, eq : equal
	char operation;


	printf("Enter Number One: ");
	scanf("%d", &n1);

	printf("Enter Number Two: ");
	scanf("%d", &n2);

	printf("Keyboard Input: ");
	scanf(" %c", &operation);// Bu kısımda bilerek bir boşluk bırak çünkü önceki switch girişlerindeki Enter'dan kalma işlemler içerebilir.

	switch(operation)
	{
	case '+': eq = n1 + n2;  	printf(" %d ", eq); 			break;
	case '-': eq = n1 - n2;		printf(" %d ", eq); 			break;
	case '*': eq = n1 * n2;		printf(" %d ", eq); 			break;
	case '/': eq = n1 / n2;		printf(" %d ", eq); 			break;
	default: 					printf("Invalid Operation");	break;
	}
}
