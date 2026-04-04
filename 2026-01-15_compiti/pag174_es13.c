#include <stdio.h>

int main() {
    int N;
    int numero = 1; // Il primo numero per iniziare

    // 1. Chiedo N finché non è maggiore di 0
    do {
        printf("Quanti numeri vuoi stampare? ");
        scanf("%d", &N);
        
        if (N <= 0) {
            printf("Errore: N deve essere positivo.\n");
        }
    } while (N <= 0);

    // 2. stampa il triplo del numero precedente.
   for(int i=0; i<N; i++) {
        printf("           %d\n",numero );
        numero *= 3; // Aggiorna numero al triplo del precedente
    }
    
    return 0;
}
