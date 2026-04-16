#include <stdio.h>

int main() {

    int n;
    printf("Inserisci un numero intero positivo: ");
    scanf("%d", &n);
    int matt[n][n];

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            // se la riga è pari metti 1 altrimenti 0, uso i+1 perche i parte da 0
          if((i+1) % 2 == 0){
                matt[i][j] = 1;
            } else {
                matt[i][j] = 0;

            }
            printf("%2d ", matt[i][j]);

        }
        printf("\n");
    }



    return 0;
}