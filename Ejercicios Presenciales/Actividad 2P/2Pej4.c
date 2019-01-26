#include <iostream>
using namespace std;

int main() {
    int x,y,suma,z,var;
    char dia;
   
    cout << "Introduce el día de la semana en minúscula en que comienza el mes: ";
    cin >> dia;

    cout << "L  " << "M  " << "X  " << "J  " << "V  " << "S  " << "D  " << endl;
    
        if (dia=='l')
            var=0;
        if (dia=='m')
            var=1;
        if (dia=='x')
            var=2;
        if (dia=='j')
             var=3;
        if (dia=='v')
            var=4;
        if (dia=='s')
            var=5;
        if (dia=='d')
            var=6;
        
    
    suma=0;
    for(y=0; y<var; y++) {
      cout << "   " ;
    }
    for(y=0; y<var; y++) {
     suma=suma+1;
        cout <<""<<suma;
        cout << "  " ;
    }
    if (var>0)
        cout << 
    

    for (x=1; x<=5; x++) {
        for (y=1; y<=7; y++) {
                              suma=suma+1;
                               if (suma<=31) 
                              cout << suma;
                              if (suma<10){
                                  cout<<"  ";
                            }
                            else
                                cout<<" ";
                          }
                          cout << endl;
                          }
}