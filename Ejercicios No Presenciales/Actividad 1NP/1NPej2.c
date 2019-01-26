#include <iostream>
using namespace std;

main()  {
   char car;
   
     cout << "Introduce un carácter: " << endl;
	 cin >> car;
	 
	 if (car=='n' || car=='s' || car=='N' || car=='S')
	     cout << "CORRECTO" << endl;
	 
	 else
	     cout << "INCORRECTO" << endl;
}