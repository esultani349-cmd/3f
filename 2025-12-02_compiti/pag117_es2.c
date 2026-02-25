#include <stdio.h>
#include <stdlib.h>


void segnodelnumero()
{  
    float num_1 , num_2;
    printf ("Inserisca il primo numero: ");
    scanf ("%f", &num_1);

    printf ("Inserisca il secondo numero: ");
    scanf ("%f", &num_2);

    if (num_1 > num_2)
      printf ("Il primo numero %.2f e' maggiore del secondo numero %.2f\n", num_1 , num_2);
     else if (num_1 < num_2)
      printf ("Il secondo numero %.2f e' maggiore del primo numero %.2f\n", num_2 , num_1);
     else
      printf ("I due numeri sono uguali\n");

    return;
}
int main() {

      segnodelnumero();

  system("pause");
  return 0;
}