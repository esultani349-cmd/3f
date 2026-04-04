#include <stdio.h>

int main() {
    int codice, max_codice = 0;
    float prezzo, max_prezzo = -1.0; // Inizializziamo con un valore basso

    printf("Inserimento prodotti (inserisci codice 0 per terminare)\n");

    do {
        printf("\nInserisci il codice del prodotto: ");
        scanf("%d", &codice);

        // Se il codice è 0, il ciclo finisce e non chiediamo il prezzo
        if (codice != 0) {
            printf("Inserisci il prezzo: ");
            scanf("%f", &prezzo);

            // Se è il primo prodotto o se il prezzo è maggiore del massimo attuale
            if (prezzo > max_prezzo) {
                max_prezzo = prezzo;
                max_codice = codice;
            }
        }

    } while (codice != 0);

    if (max_codice != 0) {
        printf("\nIl prodotto piu' costoso e':\n");
        printf("Codice: %d\n", max_codice);
        printf("Prezzo: %.2f\n", max_prezzo);
    } else {
        printf("\nNessun prodotto inserito.\n");
    }

    return 0;
}
