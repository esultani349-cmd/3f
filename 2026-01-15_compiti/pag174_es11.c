#include <stdio.h>

int main() {
    int n, accumulator = 0;
    

      
    printf("Inserisci il numero di coppie: ");
    scanf("%d", &n);
     int num1[n], num2[n];

    for(int i= 0; i<n; i++){

        printf(" Inserisci il primo numero della coppia: ");
        scanf("%d", &num1[i]);
         printf(" Inserisci il secondo numero della coppia: ");
        scanf("%d", &num2[i]);

        if(num1[i] == num2[i]) {
            accumulator++;
        }
    }

    printf("Il numero di coppie uguali è: %d\n", accumulator);

  return 0;
}