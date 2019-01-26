#include <iostream>

using namespace std;



main() {

    float nota;



    cout << "Introduce una nota: ";

    cin >> nota;


     do {

        if (nota>=9)

          cout << "SOBRESALIENTE" << endl;

        if (nota<9 && nota>=7)

          cout << "NOTABLE" << endl;

        if (nota<7 && nota>=6)

          cout << "BIEN" << endl;

        if (nota>=5 && nota<6)

          cout << "SUFICIENTE" << endl;

        if (nota<5)

          cout << "SUSPENSO" << endl;


        
        cout << "Introduce una nota: ";

        cin >> nota;

     }
 
     while (nota!=-1);

}