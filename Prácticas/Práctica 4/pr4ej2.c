#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main() {
    int n1,n2,res,pre,aci;
    char x;
    
    do {
        
      aci=0;

      for (pre=1; pre<=10; pre++) {
         
        srand((unsigned)time(NULL));
        n1=rand()%10;
        n2=rand()%10;  
          
        cout << "¿Cuánto es " << n1 << "+" << n2 << "?" << endl;
        cin >> res;
        

        if (res==n1+n2) {
           cout << "Acierto!" << endl;
            aci=aci+1;
        }
        else 
           cout << "Error!" << endl;
        }
        
        cout << "Has acertado " << aci << " respuestas." << endl;
      
        cout << "¿Quieres volver a jugar?(Si(S) o No(N)): ";
        cin >> x;

     }  while (x=='S');
     
}