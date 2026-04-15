#include <stdio.h>
#include <stdlib.h>

int main() {
    int mat[10][10];
    int zeri = 0;
    FILE *fp;

    // 1. Apere il file di dati in modalità lettura ("r")
    fp = fopen("dati.txt", "r");

    if (fp == NULL) {
        printf("Errore: Il file dati.txt non è stato trovato!\n");
        return 1;
    }

    // 2. Lettura dati e riempimento matrice
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (fscanf(fp, "%d", &mat[i][j]) == 1) {
                //se trova zero incrementa 
                if (mat[i][j] == 0) {
                    zeri++;
                }
            }
        }
    }

    fclose(fp);

    // 4. Stampa della matrice 
    printf("----------Matrice----------:\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    printf("\nTotale zeri trovati: %d\n", zeri);

    return 0;
}
