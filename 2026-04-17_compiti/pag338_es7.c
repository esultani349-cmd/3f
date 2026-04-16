#include <stdio.h>

int main () {

    int n;
    printf("Inserisci un numero intero positivo: ");
    scanf("%d", &n);
    int mat[n][n];

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            // se la colonna è pari metti 1 altrimenti 0, uso j+1 perche j parte da 0
          if((j+1) % 2 == 0){
                mat[i][j] = 1;
            } else {
                mat[i][j] = 0;

            }
            printf("%2d ", mat[i][j]);

        }
        printf("\n");
    }


    return 0;
}