#include <stdio.h>
#include <stdlib.h>


void Segno_Numero()
{
    int h, scelta;
    printf ("Inserisca il numero di ore : ");
    scanf("%d", &h);

    printf (" Scegli conversione : \n 1 per Minuti \n 2 per Secondi \n ");

    scanf("%d", &scelta);
    if (scelta == 1)
      printf("Il numero di minuti e' : %d\n", h*60);
     else if(scelta == 2)
      printf("Il numero di secondi e' : %d\n", h*3600) ;
     else
      printf("Scelta non valida\n");

    return;
}
    int main() {
    
        Segno_Numero();
    
        system("pause");
        return 0;
    }