#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero;
    int num_pari = 0, conta_pari = 0;
    int num_dispari = 0, conta_dispari = 0;
    
    // Inizializzazione corretta
    int maggiore_positivo = 0; 
    int minore_negativo = 0; 
    
    float media_pari, media_dispari;

    FILE *f;
    f = fopen("numeri.txt", "r");

    if (f == NULL) {
        printf("Errore nell'apertura del file.\n");
        return 1; // Esci se il file non c'è
    }

    while (fscanf(f, "%d", &numero) != EOF) {
        if (numero % 2 == 0) {
            num_pari += numero;
            conta_pari++;
        } else {
            num_dispari += numero;
            conta_dispari++;
        }

        if (numero > 0 && numero > maggiore_positivo) {
            maggiore_positivo = numero;
        }
        if (numero < 0 && numero < minore_negativo) {
            minore_negativo = numero;
        }
    }
    
    fclose(f); // Chiudi qui, dopo aver finito di leggere

    // Calcolo medie con controllo divisione per zero e casting float
    if (conta_pari > 0) {
        media_pari = (float)num_pari / conta_pari;
        printf("La media dei numeri pari è : %.2f\n", media_pari);
    } else {
        printf("Nessun numero pari trovato.\n");
    }

    if (conta_dispari > 0) {
        media_dispari = (float)num_dispari / conta_dispari;
        printf("La media dei numeri dispari è : %.2f\n", media_dispari);
    } else {
        printf("Nessun numero dispari trovato.\n");
    }

    printf("Il numero maggiore positivo è : %d\n", maggiore_positivo);
    printf("Il numero minore negativo è : %d\n", minore_negativo);

    return 0;
}