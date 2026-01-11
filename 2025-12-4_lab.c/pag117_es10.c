#include <stdio.h>
#include <stdlib.h>
 
void vrifica_eta_per_patente() {
  int eta;
   printf(" inserisci la tua età:  ");
    scanf("%d", &eta);

   if (eta >= 21) {
        printf("Puoi guidare qualsiasi mezzo di trasporto.\n");
    } else if(eta >= 18 ){
        printf("Puoi guidare l'auto fino a 95 cavalli\n");
    } else if(eta >= 16 ){
        printf("Puoi guidare un moto fino a 125 cc\n");
    } else if (eta >= 14 ){
        printf("Può guidare uno scooter con cilindrta di 50cc\n");
    } else {
        printf("Non puo guidare alcun mezzo di trasporto.\n");
    }



}
int main() {
    vrifica_eta_per_patente();
    return 0;
}