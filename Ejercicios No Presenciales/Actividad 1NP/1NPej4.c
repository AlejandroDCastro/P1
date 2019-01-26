#include <iostream>
using namespace std;

main ()  {
     int horas, minutos, segundos;
	 
	 horas=0;
	 minutos=0;
	 
	 cout << "Introduce un número en segundos: ";
	 cin >> segundos;
	 
	 if (segundos>=3600)
	     horas=segundos/3600;
	     segundos=segundos%3600;
     
	 if (segundos>60)
		 minutos=segundos/60;
	     segundos=segundos%60;
	 
	 cout << "Las horas son " << horas << " los minutos " << minutos << " y los segundos " << segundos << endl;
	 
}