#include <stdio.h>

int main() {
    int num, pos, n = 6;
    int numeri[10] = {5, 9, 2, 6, 1, 8};

    // Inserimento del nuovo elemento
    printf("Inserisci il numero che vuoi aggiungere: \n");
    scanf("%d", &num);
   // Il nuovo elemento viene inserito in posizione 0, e gli altri elementi vengono spostati a destra
     pos = 0;
    for (int i = n; i > pos; i--) {
        numeri[i] = numeri[i - 1];
    }
    numeri[pos] = num;
    n++;
 // se spazio non è disponibile l'ultimo elemento viene eliminato 
   // Ordinamento del vettore
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (numeri[i] > numeri[j]) {
                int temp = numeri[i];
                numeri[i] = numeri[j];
                numeri[j] = temp;
            }
        }
    }


    printf("Numeri ordinati: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", numeri[i]);
    }
    printf("\n");

    return 0;
}