#include <stdio.h>
#include <stdlib.h>

void temperatura() {
    float temp_1, temp_2, temp_3, media, limite;
    printf("Inserisci tre temperature: ");
    scanf("%f %f %f", &temp_1, &temp_2, &temp_3);

    printf("Inserisci il limite di temperatura: ");
    scanf("%f", &limite);

    media = (temp_1 + temp_2 + temp_3) / 3;

    if (media > limite) {
        printf("La media delle temperature è %.2f supera il limite di %.2f riscaldamento non si accendera\n", media, limite);
    } else {
        printf("La media delle temperature è %.2f è inferiore del limite %.2f riscaldamento si accendera\n", media, limite);
    }

    return;
}

int main() {
    temperatura();

    system("pause");
    return 0;
}