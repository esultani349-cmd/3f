#include <stdio.h>
#include <stdlib.h>


void si_no() {
    char risposta;
    printf(" inserisci una lettera. (S/N) \n");
    scanf("%c", &risposta);

    if(risposta == 's' || risposta == 'S') 
        printf(" SI \n");
    else if(risposta == 'n' || risposta == 'N')
        printf(" No \n");
    else
        printf(" Errato \n");
    return;
}
int main() {

    si_no();

    return 0;
}