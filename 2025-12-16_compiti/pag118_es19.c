#include <stdio.h>
#include <stdlib.h>

int main() {

    int n1, n2, n3;
    int somma , ris;
    printf("inserisci il primo numero: ");
    scanf("%d", &n1);   
    printf("inserisci il secondo numero: ");
    scanf("%d", &n2);

    printf(" somma i due numeri che hai inserito.\n");
    printf(" insericsi il risultato: ");
    scanf("%d", &n3);

    somma = n1 + n2;
    if (somma == n3) 
     printf(" bravo, hai indovinato al primo tentativo.\n");
    else {
     printf(" hai sbagliato, prova ancora. \n");
        printf(" insericsi il risultato: ");
        scanf("%d", &ris);
        if (ris == somma)   
         printf(" bravo, hai indovinato al secondo tentativo.\n");
        else 
         printf(" ti serve un ripasso di matematica.\n");

    }

    return 0;    








}