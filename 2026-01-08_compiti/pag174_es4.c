#include <stdio.h>
#include <stdlib.h>

int main(){
    
   int n, limite;
    int count = 0;
    int trovato = 0;

    printf("Inserisci il numero di tentativi: ");
    scanf("%d", &limite);

    while (count < limite && trovato == 0) {
        printf("Inserisci un numero intero: ");
        scanf("%d", &n);

        count++;

        if (n % 7 == 0) {
            trovato = 1;
            printf("%d", n);
        }
    }

    if (trovato == 1) {
        printf("\nNumero divisibile per 7 è: %d\n", n);
        printf("Tentativi effettuati: %d\n", count);
    } else {
        printf("\nFallimento.\n");
    }

    system("pause");
    return 0;
}