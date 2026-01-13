#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int  main() {

  char q1[50], q2[50], q3[50];
  int cop1, cop2, cop3, tot_copie;
  int maxcopie;
  double incassototale;

   printf(" inserisci primo quotidiano :");
   scanf("%s", q1);
   printf(" inserisci numero copie vendute :");
    scanf("%d", &cop1);
    
   printf(" inserisci secondo quotidiano :");
    scanf("%s", q2);
    printf(" inserisci numero copie vendute :");
    scanf("%d", &cop2);

   printf(" inserisci terzo quotidiano :");
    scanf("%s", q3);
    printf(" inserisci numero copie vendute :");
    scanf("%d", &cop3);

 // trovare il giornale con il maggior numero di copie vendute
    maxcopie = cop1;
    if (cop2 > maxcopie) {
        maxcopie = cop2;
    }
    if (cop3 > maxcopie) {
        maxcopie = cop3;
    }

    printf("\n Il giornale con il maggior numero di copie vendute è:  ");
    if (maxcopie == cop1) {
        printf("%s con %d copie vendute.\n", q1, cop1);
    } else if (maxcopie == cop2) {
        printf("%s con %d copie vendute.\n", q2, cop2);
    } else {
        printf("%s con %d copie vendute.\n", q3, cop3);
    }


    // Calcolo dell'incasso totale
    tot_copie = cop1 + cop2 + cop3;

    if (tot_copie <= 200) {
        incassototale = tot_copie * 0.10;
    } else if (tot_copie <= 300) {
        incassototale = tot_copie * 0.20;
    } else {
        incassototale = tot_copie * 0.30;
    }

    printf(" (-----L'incasso totale è: %.2f euro-----)\n", incassototale);

    return 0;

}