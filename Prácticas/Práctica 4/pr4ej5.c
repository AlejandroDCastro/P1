#include <iostream>
using namespace std;

int main() {
   int n,x,y;

   do {

   cout << "Introduce un número (0<N<=9): ";
   cin >> n;

   if (n<=0 || n>9)
   cout << "El valor introducido es incorrecto. Vuleve a introducirlo" << endl;

   } while (n<=0 || n>9);

   for (x=1; x<=n; x++) {
       for (y=1; y<=n; y++)
           cout << "(" << x << "," << y << ") ";
       cout << endl;
   }
}