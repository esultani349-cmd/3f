#include <stdio.h>
#include <float.h>

int main() {
    int N, i, tessera, tesseraMin;
    float spesa, totale = 0, spesaMin = FLT_MAX; 
    FILE *file;

    printf("Inserisci il numero di clienti (N > 6): ");
    scanf("%d", &N);

    file = fopen("Clienti.txt", "r");
    if (file == NULL) {
        printf("Errore nell'apertura del file!\n");
        return 1;
    }

    for(i = 0; i < N; i++) {
        // Legge coppia di dati dal file
        if(fscanf(file, "%d %f", &tessera, &spesa) != EOF) {
            totale += spesa;
            
            // Controllo se è la spesa minore
            if(spesa < spesaMin) {
                spesaMin = spesa;
                tesseraMin = tessera;
            }
        }
    }

    printf("Incasso totale: %.2f\n", totale);
    printf("Tessera associata alla spesa minore: %d\n", tesseraMin);

    fclose(file);
    return 0;
}