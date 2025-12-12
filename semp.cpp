
    #include <stdio.h>
int main() {
    int b, d, m;
    printf("Piacere io sono un semplice codice fatto da erfan. Scrivi la tua eta e io ti dico chi sei, o sei un fratello di Erfan o Erfan.:\n");
    scanf(" %d", &b);
    
  scanf(" %d", &m);


    
    d = b;
    switch (d) {
    case 16:
         printf("ahhhhh Erfan da quanto tempo, adesso quanti anni hai. Quando mi hai creato era 11/12/2025 adesso in che anno sei ?\n");
        break;
    case 19:
         printf("tu sei Ali\n");
        break;
        case 11:
         printf("tu sei Aref\n");
        break;
    default:
            printf("tu sei un figlio di questa famiglia\n");
        break;
    }
   

    return 0;
}
