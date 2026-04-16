#include <stdio.h>

int main() {
    int n;
    
    printf("Inserisci un numero intero positivo: ");
    scanf("%d", &n);
    int mat[n][n]; 
   

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            // se riga e colonna sono uguali metti 1 altrimenti 0
            if(i == j || i + j == n - 1) {
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
