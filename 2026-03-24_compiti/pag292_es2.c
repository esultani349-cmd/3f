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

    char cognomi[N][LS] = {"Francesco", "Mattia", "Alessio", "David", "Basit"};
    
     ordinamento(cognomi, N);
        printf("Il primo e l'ultimo nome in ordine alfabetico sono:\n");
      for(int i=0; i<N; i++){
        if(i==0){
            printf("%s\n", cognomi[i]);
        } else if(i==N-1){
            printf("%s\n", cognomi[i]);
        }
    
      }         

 return 0;
}