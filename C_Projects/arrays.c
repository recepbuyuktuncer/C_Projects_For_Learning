#include <stdio.h>
#include <stdlib.h>

int main() {
    char cities[3][15];
    int i;

    for(i = 0; i < 3; i++) {
        printf("Enter City: ");
        scanf("%s", cities[i]);
    }

    printf("%s %s %s\n", cities[0], cities[1], cities[2]);

    return 0;
}
