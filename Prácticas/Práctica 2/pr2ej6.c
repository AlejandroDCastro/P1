#include <iostream>

using namespace std;


main() {

   int he,hs,me,ms,minutosE,minutosS,mT;



   cout << "Introduce la hora y minuto de entrada, respectivamente:" << endl;

   cin >> he;

   cin >> me;



   cout << "Introduce la hora y minuto de salida, respectivamente:" << endl;

   cin >> hs;

   cin >> ms;



   minutosE=he*60+me;

   minutosS=hs*60+ms;

   mT=minutosS-minutosE;



   cout << "El vehículo ha permanecido en el parking " << mT << " minutos " << "y el importe a pagar es de " << (mT/30)*0.35 << " euros." << endl;

}