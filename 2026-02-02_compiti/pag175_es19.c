#include <stdio.h>

int main(){
int i, num, j;
do{

    printf("Inserisci un numero intero e positivo;");
scanf("%d", &num);
if(num < 1){
    printf("Il numero inserito non è valido, riprova.\n");
}
}while(num < 1); // per verificare che il numero sara maggiore di zero cosi fa almeno un ciclo.


for (i = 1; i <= num; i++) {
        
        // Ciclo interno per stampare il numero 'i' per 'i' volte
        for (j = 1; j <= i; j++) {
            printf("%d", i);
        }
        printf("\n");
    }














    return 0;
}