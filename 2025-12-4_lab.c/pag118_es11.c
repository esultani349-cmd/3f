#include <stdio.h>
#include <stdlib.h>
void equazione_di_primo_grado() {

    int a, b;
     float x;
        printf(" inserisci il valore di a:  ");
        scanf("%d", &a);
        printf(" inserisci il valore di b:  ");
        scanf("%d", &b);
    
        if(a != 0) {
            x = -b / (float)a;
            printf(" La soluzione dell'equazione di primo grado è: x = %.2f\n", x);
        } else {
            if(b == 0) {
                printf(" L'equazione ha infinite soluzioni.\n");
            } else {
                printf(" L'equazione non ha soluzioni.\n");
            }
        }




}
int main() {
    equazione_di_primo_grado();
    return 0;
}