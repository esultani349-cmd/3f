#include <stdio.h>

int main() {
    // Definiamo 5 reparti
    float vendite[5];
    float totale_generale = 0;
    int i;

    printf("--- Inserimento vendite giornaliere ---\n");

    // 1. Lettura dei dati per ogni reparto
    for(i = 0; i < 5; i++) {
        printf("Inserisci il totale vendite per il reparto %d (€): ", i + 1);
        scanf("%f", &vendite[i]);
        
        // Accumuliamo il totale generale
        totale_generale += vendite[i];
    }

    printf("\n--- Report Vendite ---\n");
    // \t\t per allineare le colonne
    printf("REPARTO\t\tVENDITE\t\tPERCENTUALE\n");
    printf("-------------------------------------------\n");

    // 2. Calcolo e visualizzazione dei dati
    if (totale_generale > 0) {
        for(i = 0; i < 5; i++) {
            float percentuale = (vendite[i] / totale_generale) * 100;
            // %% per stampare il simbolo di percentuale.
            printf("Reparto %d\t%.2f €\t\t%.2f%%\n", i + 1, vendite[i], percentuale);
        }
    } else {
        printf("Nessuna vendita registrata oggi.\n");
    }

    printf("-------------------------------------------\n");
    printf("TOTALE GENERALE: %.2f €\n", totale_generale);

    return 0;
}