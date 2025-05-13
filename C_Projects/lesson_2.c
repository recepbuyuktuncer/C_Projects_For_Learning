/*
 ============================================================================
 Name        : example_one
 Author      : Recep Buyuktuncer
 Version     : Lesson 1
 Copyright   : Your copyright notice
 Description : Hello World in C, Açıklamalar yorumlarda verilmiştir.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main () {

	char futbolcu_adı[15]="Ferdi Kadıoglu"; // variable_name[character_value] = "scan for print"//
	char futbolcu_numara[5]="Yedi";
	char futbolcu_ayak[4]="Sag";
	char futbolcu_takım[9]="Brighton";
	char futbolcu_deger[11]="Bes milyon";

	printf("******* Futbolcu Bilgi *******\n\n");
	printf("Futbolcu Adı: %s\n", futbolcu_adı);
	printf("Futbolcu Numara: %s\n", futbolcu_numara);
	printf("Futbolcu Ayak: %s\n", futbolcu_ayak);
	printf("Futbolcu Takım: %s\n", futbolcu_takım);
	printf("Futbolcu Değer: %s\n\n", futbolcu_deger);
	printf("******* Futbolcu Bilgi *******");








return 0;
}
