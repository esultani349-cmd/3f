#include <stdio.h>
#include <stdlib.h>

void fratello_maggiore_minore() {

 int f1, f2, f3, mag, min, diff;
   
   printf("insericsi l'eta dei tre fratelli: ");
   scanf("%d %d %d", &f1, &f2, &f3);
   mag = f1;
   min = f1;

    if(f2 > mag)
        mag = f2;
    if(f3 > mag)
        mag = f3;
    if(f2 < min)
        min = f2;
    if(f3 < min)
        min = f3;

        diff = mag - min;
    printf(" la differenza di età tra il fratello maggiore e il minore è: %d \n", diff);
  
    return;
}
int main() {
    fratello_maggiore_minore();
    return 0;
}