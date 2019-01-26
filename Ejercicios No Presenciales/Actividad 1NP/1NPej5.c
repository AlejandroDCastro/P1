#include <iostream>
using namespace std;

main()  {
   float euros;
   int cm1,cm2,cm5,cm10,cm20,cm50,eu1,eu2;
   
   cm2=0; cm5=0; cm10=0;
   cm20=0; cm50=0; eu1=0; eu=0;
   
   cout << "Introduce una cantidad en euros ";
   cin >> euros;
   cm1=100*euros;
   
   if (cm1>=200) {
   eu2=cm1/200
   cm1=cm1%200;
   }
   
   if (cm1>=100) {
   eu1=cm1/100;
   cm1=cm1%100;
   }
   
   if (cm1>=50) {
   cm50=cm1/50;
   cm1=cm1%50;
   }
   
   if (cm1>=20) {
   cm20=cm1/20;
   cm1=cm1%20;
   }
   
   if (cm1>=10) {
   cm10=cm1/10;
   cm1=cm1%10;
   }
   
   if (cm1>=5) {
   cm5=cm1/5;
   cm1=cm1%5;
   }
   
   if (cm1>=2) {
   cm2=cm1/2;
   cm1=cm1%cm1;
   }
   
   cout << "Son necesarias; " << endl;
   cout << eu2 << " monedas de 2 euros" << endl;
   cout << eu1 << " monedas de 1 euro" << endl;
   cout << cm50 << " monedas de 50 cm" << endl;
   cout << cm20 << " monedas de 20 cm" << endl;
   cout << cm10 << " monedas de 10 cm" << endl;
   cout << cm5 << " monedas de 5 cm" << endl;
   cout << cm2 << " monedas de 2 cm" << endl;
   cout << cm1 << " monedas de 1 cm" << endl;