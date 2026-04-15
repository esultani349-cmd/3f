#include <stdio.h>

int main() {

    int num_1, num_2, condizione = 0, coppie = 0;
    do{
        printf("Inserisci il primo numero: ");
        scanf("%d", &num_1);
        printf("inserisci il secondo numero: ");
        scanf("%d", &num_2);

        coppie++; // conta il numero di coppie inserite

        if(num_1 == num_2){
            condizione = 1;
        }else if(num_2 > num_1){
            condizione = 2;
        }
    }while(condizione == 0); // finche la condizione è 0 continua a chiedere i numeri

    if(condizione == 1){
        printf("I numeri sono uguali.\n");
    }else if(condizione == 2){
        printf("Il secondo numero è maggiore del primo.\n");
    }

    printf("Hai inserito %d coppie di numeri.\n", coppie);

    return 0;
}