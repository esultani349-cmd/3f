#include <stdio.h>
#include <stdlib.h>

void Intervallo(){
        float num;
        printf("Inserisci un numero: ");
        scanf("%f", &num);

        if(num >= -5 && num <= 10)
            printf("OK! Il numero è %.2f \n", num);
        else
            printf("Il numero %.2f non è nell'intervallo [-5, 10]\n", num);

        return;
    }

int main(){

    Intervallo();

    system("pause");
    return 0;
}