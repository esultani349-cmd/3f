#include <stdio.h>
#include <stdlib.h> 

int main() {

    FILE *f;
    f = fopen("numeri.txt", "r");
    if (f == NULL) {
        printf("Errore nell'apertura del file.\n");
    }else {
         int num, max, min;
         fscanf(f, "%d", &max);
         min = max; // Inizializzazione del valore minimo con il primo numero letto.
     
        for(int i=0; i<4;i++){
         fscanf(f, "%d", &num);
         if(num < 6)  {
         if(num<min){
            min=num;
          }
        }else if (num > 5){
         if (num > max){
            max=num;
          
          }
        
        }
        
    
        }
 printf("Il voto massimo per le suffiscienze  minimo è: %d\nIl voto minimo per le insufficienti è: %d", max, min);
         fclose(f);
       
}
 return 0;
}