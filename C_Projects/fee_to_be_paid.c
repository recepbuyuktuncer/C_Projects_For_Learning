// This program calculates the price to be paid in the cinema
#include<stdio.h>
#include<stdlib.h>

int main () {

	int n_of_popcorn, n_of_coke, n_of_water, n_of_ticket, amount_to_be_paid; // n : number

	printf("The number of popcorn purchased:");
	scanf("%d", &n_of_popcorn);

	printf("The number of coke purchased:");
	scanf("%d", &n_of_coke);

	printf("The number of water purchased:");
	scanf("%d", &n_of_water);

	printf("The number of ticket purchased:");
	scanf("%d", &n_of_ticket);

	amount_to_be_paid = (n_of_popcorn*2) + (n_of_coke*2) + (n_of_water*1) + (n_of_ticket*8);

	printf("Amount to be Paid: %d", amount_to_be_paid);

}
