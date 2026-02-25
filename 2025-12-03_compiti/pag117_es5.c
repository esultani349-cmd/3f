#include <stdio.h>
#include <stdlib.h>
#include <math.h>
           // un programma che permette di risolvere un'equazione di secondo grado
  void equazionedisecondogrado() {
    float a, b, c, delta, x, x1, x2;
    int potenza = 2;
    printf("Inserisci i coefficienti a, b e c dell'equazione di secondo grado (ax^2 + bx + c = 0):\n");
    scanf("%f %f %f", &a, &b, &c);
    if (a != 0) {
        delta = pow(b, potenza) - 4 * a * c;
        if (delta > 0) {
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
            printf("Le soluzioni reali sono : x1 = %.2f \n x2 = %.2f\n", x1, x2);
        } else if (delta == 0) {
            x = -b / (2 * a);
            printf("L'equazione ha una soluzione reale x = %.2f\n", x);
        } else {
            printf("L'equazione non ha radici reali.\n");
        }
    } else {
        printf("Non e' un'equazione di secondo grado.\n");
    }   
    return;
}
int main() {
    
    equazionedisecondogrado();
    
    system("pause");
    return 0;
}