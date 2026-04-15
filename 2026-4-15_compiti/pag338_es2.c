#include <stdio.h>

int main() {
    int n;
    printf("Inserisci l'ordine N: ");
    scanf("%d", &n);
    int i, j;
    int mat[100][100];
    printf("La tabella pitagorica di ordine %d è:\n", n); 
   
    for( i = 0; i < n; i++) {
        for( j = 0; j < n; j++) {
            mat[i][j] = (i + 1) * (j + 1);
            // uso %4d per mettere piu spazzi tra i numeri in colonna
            printf("%4d", mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}
