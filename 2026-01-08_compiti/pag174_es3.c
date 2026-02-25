#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b;
    int count = 0;

    printf("Inserisci due numeri interi (a e b): ");
    scanf("%d \n %d", &a, &b);

    // scambio se a è maggiore di b
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }

    printf("Numeri pari compresi tra %d e %d:\n", a, b);

    for (int i = a; i <= b; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
            count++;
        }
    }

    printf("\nTotale numeri pari: %d\n", count);

    return 0;
}
