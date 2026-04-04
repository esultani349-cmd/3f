#include <stdio.h>
#define K 5
int main() {

    int n, maggiore = 0, minore = 0, uguali = 0;

    printf("Inserisci quanti numeri vuoi inserire:");
    scanf("%d", &n);
    int num[n];

    for(int i= 0; i< n; i++){

        printf("Inserisci un numero: ");
        scanf("%d", &num[i]);

        if(num[i] > K) {
            maggiore++;
        } else if (num[i] < K) {
            minore++;
        } else {
            uguali++;
        }
    }

    printf("Numeri maggiori di %d: %d\n", K, maggiore);
    printf("Numeri minori di %d: %d\n", K, minore);
    printf("Numeri uguali a %d: %d\n", K, uguali);



     
}
