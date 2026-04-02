#include <stdio.h>
#include <stdlib.h>


int main() {
    int num, max;
    int c = 1;

    printf("Inserisci il numero: ");
    scanf("%d", &num);
    max = num;

    while (c < 4){
        printf("Inserisci il numero: ");
        scanf("%d", &num);

        if (num > max) {
            max = num;
        }

        c++; 
    }


    printf("Il valore massimo è: %d\n", max);

    return 0;
}