#include <stdio.h>
#include <stdlib.h>

int main () {
      int n, m;
      printf("Inserisci un numero intero positivo: ");
      scanf("%d", &n);
      if(n > 0){
        //stampo i numeri pari e dispari fino a n
        printf("Numeri pari:");
       for( int i=1; i<=n; i++){
        i+=1;
         printf(" %d, ", i);
       }
         //stampo i numeri dispari fino a n
        printf("\nNumeri dispari:");
      for( int i=1; i<=n; i++){

        i+=1;
        m=i-1;
        
        printf(" %d, ", m);
       }
        

    }else {
        printf("Il numero non è intero.");
    }

    return 0;
}