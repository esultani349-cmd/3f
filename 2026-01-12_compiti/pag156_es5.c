#include <stdio.h>

int main() {
    int N;
    float num1, num2, mediaCorrente;
    float maxMedia;
    float coppiaMax1, coppiaMax2;

    printf("Inserisci il numero di coppie (N): ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("Il numero di coppie deve essere maggiore di 0.\n");
       
    }

    for (int i = 0; i < N; i++) {
        printf("\nCoppia %d\n", i + 1);
        printf("Inserisci il primo numero: ");
        scanf("%f", &num1);
        printf("Inserisci il secondo numero: ");
        scanf("%f", &num2);

        mediaCorrente = (num1 + num2) / 2;
        // uso i==0 per inizializzare maxMedia con la prima media calcolata, così da poterla confrontare con le successive.
        if (i == 0 || mediaCorrente > maxMedia) {
            maxMedia = mediaCorrente;
            coppiaMax1 = num1;
            coppiaMax2 = num2;
        }
    }

    printf("\n--- Risultato ---\n");
    printf("La coppia con la media maggiore e': (%.2f, %.2f)\n", coppiaMax1, coppiaMax2);
    printf("La media e': %.2f\n", maxMedia);

    return 0;
}

