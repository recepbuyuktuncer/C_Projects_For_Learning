// for(Değişken Değer;Değişkenin maks Değeri;Artış Miktarı)
// {
//    printf basar değer döndürürsün alırsın bla bla
// }

#include<stdio.h>
#include<stdlib.h>

int main () {

	int counter = 0;
	int i;

	for(i=1;i<11;i++)
	{
		counter = counter + i;
	}
	printf("Counter: %d", counter);
}
