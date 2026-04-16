#include <stdio.h>

int main() {
    int righe = 5, colonne = 5;
    int mat[righe][colonne];

    for(int i = 0; i < righe; i++) {
        for(int j = 0; j < colonne; j++) {
            // somma il proprio indice di riga e colonna
            mat[i][j] = i + j;
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}
