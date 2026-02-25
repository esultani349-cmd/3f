#include <stdio.h>

int main() {
    int x, y;
    int somma = 0;

   printf("Inserisci il numero Y(numero di partenza): ");
    scanf("%d", &y);

    printf("Inserisci il numero X(numeri successivi): ");
    scanf("%d", &x);
    for (int i = 1; i <= x; i++) {
        somma += (y + i) * (y + i);
    }

    printf("La somma dei quadrati dei primi %d numeri successivi a %d è: %d\n", x, y, somma);

    return 0;
}
