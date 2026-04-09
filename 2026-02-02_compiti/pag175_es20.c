#include <stdio.h>

int main() {
int i, primonumero, secondonumero, risultato=0;
printf("Inserisci il primo numero: ");
scanf("%d", &primonumero);
printf("Inserisci il secondo numero: ");
scanf("%d", &secondonumero);
// se anche uno dei due numeri sono minori di uno il risultato è 1
if(primonumero < 1 || secondonumero < 1) {
    printf("il prodotto tra due numeri è 0.");
} else{
    for(i = 0; i < secondonumero; i++) {
        // aggiungo il primo numero a se stesso tante volte quanto è il secondo numero
    risultato += primonumero;
    }
    printf("Il prodotto è: %d\n", risultato);
}
return 0;
}