#include <stdio.h>
#include <stdlib.h> 

void controllo() {
    char nome[15];
   int eta;

    printf("Inserisci il tuo nome:\n");
    scanf("%15s", nome);

    printf("Inserisci la tua età:\n");
    scanf("%d", &eta);

    if (eta >= 18) 
        printf(" %s è maggiorenne.\n", nome);
   
    
}
 int main() {
    controllo();
    system("pause");  
    
    return 0;
    }