#include <iostream>

using namespace std;


main() {

    float nota,suma,max,min;

    int numnot;


    suma=0;

     
    cout << "Introduce una nota: ";

    cin >> nota;


    numnot=0;

    max=0;

    min=nota;

    
    while (nota != -1) {


         suma=suma+nota;

         numnot=numnot+1;


         
    if (nota>max)

     max=nota;

    if (nota<min)

     min=nota;


         cout << "Introduce una nota: ";

         cin >> nota;

   }

    cout << "La nota media es " << suma/numnot << endl;

    cout << "La nota máxima es " << max << endl;

    cout << "La nota mínima es " << min << endl;

}
