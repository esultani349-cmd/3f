#include <stdio.h>
#include <stdlib.h>


int main() {
    int a, b, numero;
    printf("Inserisci il valore di a: ");
    scanf("%d", &a);
    do{
        printf("Inserisci il valore di b (b deve essere minore di a): ");
        scanf("%d", &b);
        if(b >= a)
            printf("Errore: il valore di b deve essere minore di a.\n");

    } while (b >= a);

      
    do {
        printf("Scrivi un numero:");
        scanf("%d", &numero);
         
    } while (numero >= a && numero <= b);
    
    system("pause");
    return 0;    
}