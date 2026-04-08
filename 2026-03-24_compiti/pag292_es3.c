#include <stdio.h>

int main() {
    int numeri[5] = {10, 36, 98, 20, 67};
    int n = 5; // Numero elementi attuali
    int Eliminare, trovato = 0;

    printf("Inserisci il numero da eliminare: ");
    scanf("%d", &Eliminare);

    
    for (int i = 0; i < n; i++) {
        if (numeri[i] == Eliminare) {
            // 2. Elemento trovato, lo shift a sinistra
            for (int j = i; j < n - 1; j++) {
                numeri[j] = numeri[j + 1];
            }
            
            n--;      // Riduciamo la dimensione del vettore
            trovato = 1; 
            i--;      
                      
        }
    }

    // ordinamento del vettore aggiornato
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (numeri[i] > numeri[j]) {
                int temp = numeri[i];
                numeri[i] = numeri[j];
                numeri[j] = temp;
            }
        }
    }
    
    if (trovato) {
        printf("Numero è stato eliminato. Vettore aggiornato: ");
        for (int i = 0; i < n; i++) printf("%d ", numeri[i]);
    } else {
        printf("Elemento %d non trovato nel vettore.", Eliminare);
    }

    return 0;
}