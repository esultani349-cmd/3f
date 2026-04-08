#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 5
#define LS 20
void ordinamento(char cognomi[N][LS], int n) {
    char temp[LS];
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(cognomi[i], cognomi[j]) > 0) {
                strcpy(temp, cognomi[i]);
                strcpy(cognomi[i], cognomi[j]);
                strcpy(cognomi[j], temp);
            }
        }
    }
}
int main() {

    char cognomi[N][LS] = {"Rossi", "Bianchi", "Cucci", "Neri", "Blu"};
    printf("Cognomi prima dell'ordinamento:\n"); 
    for(int i=0; i<N; i++){
        printf("%s\n", cognomi[i]);
      }

     ordinamento(cognomi, N);
        printf("\nCognomi dopo l'ordinamento:\n");
      for(int i=0; i<N; i++){
        printf("%s\n", cognomi[i]);
      }         

 return 0;
}