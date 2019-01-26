#include <iostream>
using namespace std;

main() {
   float num1,num2,sum;
   
   num1=0;
   num2=0;
   
   cout << "Introduce dos valores, entre el 1 y el 12, de dos cartas aparte:" << endl;
   cin >> num1;
   cin >> num2;
   
   if (num1==10 || num1==11 || num1==12) {
         num1=0.5;
   }
   if (num2==10 || num2==11 || num2==12) {
         num2=0.5;
   }	
   
   sum=num1+num2;
   
   if (sum<7.5) {
         cout << "Se puede pedir otra carta.";
   }	 
   if (sum==7.5) {
         cout << "Deberíamos plantarnos.";
   }	 
   if (sum>7.5) {
         cout << "Nos hemos pasado.";
   }
}