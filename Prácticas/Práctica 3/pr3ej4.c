#include <iostream>

using namespace std;



main() {
   char car;



   cout << "Introduce un carácter: ";

   cin >> car;



   if (((car>=65) && (car<=90)) || ((car>=97) && (car<=122))) {

      cout << "Este carácter es una letra." << endl;

   
      if ((car>=65) && (car<=90))
 
           cout << "Además, es mayúscula";

         else
 
           cout << "Además, es minúscula";


   
      if (car==65 || car==69 || car==73 || car==79 || car==85 || car==97 || car==101 || car==105 || car==111 || car==117)

            cout << " y vocal." << endl;

      
   else

            cout << " y consonante." << endl;

   }


   else {

      cout << "Este carácter no es una letra." << endl;
   }
}