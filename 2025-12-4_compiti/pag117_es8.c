#include <stdio.h>

void verifica_progressione() {
    int N_1, N_2, N_3;

    printf("Inserisci tre numeri: ");
    scanf("%d %d %d", &N_1, &N_2, &N_3);

    if ((N_2 - N_1) == (N_3 - N_2)) {
        printf("I numeri sono in progressione aritmetica.\n");
    } else {
        printf("I numeri NON sono in progressione aritmetica.\n");
    }
}

int main() {
    verifica_progressione();
    return 0;
}
