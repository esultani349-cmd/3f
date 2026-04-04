#include <stdio.h>
#define K 10
#define N 3
int main() {
    FILE *fp;
    float peso, altezza, rapporto;
    int i;
    int contatore = 0;

    printf("Ci sono tre persone nel file. \n");
    
    

    // 2. Apre il file in modalità lettura ("r")
    fp = fopen("Persone.txt", "r");

    if (fp == NULL) {
        printf("Errore: Impossibile aprire il file Persone.txt\n");
        return 1; 
    }

    
    for (i = 0; i < N; i++) {
        
        if (fscanf(fp, "%f %f", &peso, &altezza) == 2) {
            rapporto = peso / altezza;
            
            printf("Persona %d: rapporto %.2f\n", i + 1, rapporto);

            // 4. Verifica quanti persone superano K
            if (rapporto > K) {
                contatore++;
            }
        }
    }

    // chiude il file
    fclose(fp);

    printf("\nNumero di persone con rapporto > %.2f: %d\n", K, contatore);

    return 0;
}
