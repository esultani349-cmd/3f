#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 5 
#define LS 20

// Funzione per calcolare la media degli stipendi
void media_stipendi(int stipendi[N],  double *media) {
    int somma = 0;
    for (int i = 0; i < N; i++) {
        somma += stipendi[i];
    }
    *media = (double)somma / N;
   
}
    // Funzione per ordinare gli stipendi e i codici fiscali in base agli stipendi
void ordinamento(int stipendi[N], char codice_fiscali[N][LS]) {
    int temp_stipendi;
    char temp_codice[LS];
    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {
            if (stipendi[i] > stipendi[j]) {
                // Scambio stipendi
                temp_stipendi = stipendi[i];
                stipendi[i] = stipendi[j];
                stipendi[j] = temp_stipendi;

                // Scambio codici fiscali
                strcpy(temp_codice, codice_fiscali[i]);
                strcpy(codice_fiscali[i], codice_fiscali[j]);
                strcpy(codice_fiscali[j], temp_codice);
            }
        }
    }
}
int main() {
    int stipendi[N] = {2500, 3200, 2800, 3000, 3500};
    char codice_fiscali[N][LS] = {"Fra10", "Mat15", "Ale86", "Dav54", "Bas51"};
        double media;
    
     for(int i=0; i<N; i++){
        printf("Codice fiscale: %s, Stipendio: %d\n", codice_fiscali[i], stipendi[i]);
      }
     media_stipendi(stipendi, &media);
     ordinamento(stipendi, codice_fiscali);
     
      printf("\nLa media degli stipendi è: %.2f\n", media);
     for(int i=0; i<N; i++){
        if(stipendi[i]<media){
            printf("Il codice fiscale %s ha uno stipendio inferiore alla media.\n", codice_fiscali[i]);
        }
     
      }
       
    
 return 0;
}