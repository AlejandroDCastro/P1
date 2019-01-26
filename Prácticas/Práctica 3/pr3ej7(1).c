#include <iostream>
using namespace std;

main()  {
   float diae,mese,anioe,dias,mess,anios,fT;
   float he,me,hs,ms,mT,precio;
   
   cout << "Introduce la fecha de entrada al parking, es decir, día, mes y año aparte:" << endl;
   cin >> diae;
   cin >> mese;
   cin >> anioe;
   
   cout << "Introduce la fecha de salida al parking, es decir, día, mes y año aparte:" << endl;
   cin >> dias;
   cin >> mess;
   cin >> anios;
   
   cout << "Introduce la hora y el minuto de entrada al parking aparte:" << endl;
   cin >> he;
   cin >> me;
   
   cout << "Introduce la hora y el minuto de salida del parking aparte:" << endl;
   cin >> hs;
   cin >> ms;
   
   if (mess>mese || anios>anioe)  {
	   cout << "No te gustaría saber el dinero que vas a tener que desembolsar" << endl;
   }
   
   if (hs>he) {
	      fT=(dias-diae)*24*60;
	      mT=(hs-he)*60+(ms-me)+fT;
          precio=(mT/30)*0,35; 
 
	   cout << "El precio total del tiempo en el que el vehículo ha estado estacionado en el parking es " << precio << " euros." << endl;
     
 } if (hs<he) {
       cout << "Error: La hora de salida debe ser mayor que la hora de entrada." << endl;
   }
}