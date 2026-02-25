#include <stdio.h>
#include <stdlib.h>

#define P 3.141

int main(){
    int raggio;
    float area, circonferenza;

    for (raggio = 1; raggio <= 20; raggio++){
        area = P * raggio * raggio;
        circonferenza = 2 * P * raggio;

        printf(" Area: %8.2f | Circonferenza: %8.2f\n", area, circonferenza);
    }
    
    system("pause");
    return 0;
}

