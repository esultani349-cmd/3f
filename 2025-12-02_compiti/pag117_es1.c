#include <stdio.h>
#include <stdlib.h>


void Segno_Numero()
{
  float num;

    printf ("Inserisca il numero da verificare: ");
    scanf ("%f", &num);
    
    if (num>0)
      printf("il numero %.2f e' positivo\n", num);
     else if(num<0)
      printf("Il numerino %.2f e' negativo" , num) ;
     else
      printf("Il numero e' neutro o nullo\n");

    return;
}


  int main() {

    Segno_Numero();

    system("pause");
    return 0;
}
