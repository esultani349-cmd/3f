#include <stdio.h>


int main() {
     int n=5;
     int valori[]={5,6,4,7,8};
    
     int min=valori[0]; // Inizializzazione valore d'appoggio.
      
     for (int i = 1; i < n; i++) {

        if(valori[i] < min){
            min = valori[i]; // aggiorno di valori
        }
     }

     printf("Il valore minimo è: %d", min);

     return 0;
}