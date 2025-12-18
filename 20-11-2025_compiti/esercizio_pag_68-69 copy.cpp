#include <stdio.h>
#include <stdlib.h> 

const float CK = 1.2;
void importo()  {
    char nome[15];
    float km_iniziali, km_finali, km_percorsi, importo;

    printf("Inserisci il tuo nome:\n");
    scanf("%15s", nome);

    printf("Inserisci i chilometri iniziali dell'automobile:\n");
    scanf("%f", &km_iniziali);

    printf("Inserisci i chilometri finali dell'automobile:\n");
    scanf("%f", &km_finali);

    km_percorsi = km_finali - km_iniziali;
    importo = km_percorsi * CK;

    printf("Gentile %s, hai percorso %.2f km e devi pagare %.2f euro.\n", nome, km_percorsi, importo);
    printf("Grazie per aver scelto il nostro servizio, siamo aperti 24 su 24 ore.\n");

    
}
int main() {
    importo();
    system("pause");  
    
    return 0;
    }