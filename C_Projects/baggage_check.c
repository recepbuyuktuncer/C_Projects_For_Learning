#include<stdio.h>
#include<stdlib.h>

int main () {

	int amount_to_be_paid, luggage, hand_luggage;

	printf("Amount of Luggage:");
	scanf("%d", &luggage);

	printf("Amount of Hand Luggage:");
	scanf("%d", &hand_luggage);

	amount_to_be_paid = 5*((luggage+hand_luggage)-23);

	printf("Amount To Be Paid: %d", amount_to_be_paid);
}
