#include <stdio.h>
#include <stdlib.h>

#define N 4
#define M 2

int TotRiga(int m[N][M], int r);
int TotColonna(int m[N][M], int c);
int Totale(int m[N][M]);

int main(int argc, char *argv[]) {
    int mat[N][M] = {
        {2, 3},
        {6, 7},
        {10, 13},
        {14, 15}
    };

    int tot, totr, totc;

    for (int i = 0; i < N; i++) {
        totr = TotRiga(mat, i);
        printf("totale riga %d = %d\n", i + 1, totr);
    }

    for (int j = 0; j < M; j++) {
        totc = TotColonna(mat, j);
        printf("totale colonna %d = %d\n", j + 1, totc);
    }

    tot = Totale(mat);
    printf("totale generale = %d\n", tot);

    system("PAUSE");
    return 0;
}

int TotRiga(int m[N][M], int r) {
    int tot = 0;
    for (int j = 0; j < M; j++) {
        tot = tot + m[r][j];
    }
    return tot;
}

int TotColonna(int m[N][M], int c) {
    int tot = 0;
    for (int i = 0; i < N; i++) {
        tot = tot + m[i][c];
    }
    return tot;
}

int Totale(int m[N][M]) {
    int tot = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            tot = tot + m[i][j];
        }
    }
    return tot;
}