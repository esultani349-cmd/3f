#include <iostream>
using namespace std;

int main()
{
     float base, altezza, lato, diagmin, diagmag, area;
     string ris, figura ;
   do{   

        cout <<" menu dei figur disponibili, scrivi il numero della figura: \n"  ;
        cout << "1 Triangolo \n" ;
        cout << "2 Quadrato \n" ;
        cout << "3 Rettangolo \n";
        cout << "4 Rombo \n" ;
        
        
        int sce5;
       
        cin >> sce5;
        
        if (sce5 == 1){ //    Triangolo     //
        
        figura = "Triangolo" ; 
        cout << "Inserisca la base :\n";
        cin >> base;
        cout << "Inserisca l'altezza:\n";
        cin >> altezza;
        area = (base * altezza) / 2 ;
            
        cout << "L'area del "<< figura << " è : " << area << ".\n";

            
        } else if (sce5 == 2){ //    Quadrato     //
           
        figura = "quadrato";
        cout << "Inserisca il lato\n";
        cin >> lato;
        area = lato * lato;
        cout << "L'area del "<< figura << " è : " << area << ".\n" ;
           
       }else if (sce5 == 3){ //    Rettangolo     //
           
           
        figura = "rettangolo";
        cout << "Inserisca la base :\n";
        cin >> base;
        cout << "Inserisca l'altezza:\n";
        cin >> altezza;
        area = base * altezza;
            
        cout << "L'area del "<< figura << " è : " << area << ".\n";
        
       } else if (sce5 == 4){ //    Rombo     //
        figura = "rombo";
        cout << "Inserisca la diagonale maggiore : \n";
        cin >> diagmag;
        cout << "Inserisca la diagonale minore : ";
        cin >> diagmin;
        area = (diagmin * diagmag)/2;
        cout << "L'area del "<< figura << " è : " << area << ".\n";
        
       }else if (sce5 == 5){
           cout << "Questo figur non è disponibile.\n" ;
           
       }else { 
           cout << " Il numero non è valido \n" ;
           
       }
        cout << " Se vuoi unaltra ffigura scrivi si se no scrivi no\n" ;
        cin >> ris;
}while(ris == "Si" || ris == "si" || ris == "SI" || ris == "sI");

    return 0;
}
  