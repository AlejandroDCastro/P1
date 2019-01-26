#include <iostream>
using namespace std;

main()  {
     char op;
	 
	 cout << "Elige una entre estas 3 opciones (pon la letra mayúscula): " << endl;
	 cout << "OPCIÓN A" << endl;
	 cout << "OPCIÓN B" << endl;
	 cout << "OPCIÓN C"	<< endl;
     cin >> op;
	 
	 switch (op) {
	     case 'A': cout << "Has elegido la opción A" << endl;
		    break;
	     case 'B': cout << "Has elegido la opción B" << endl;
		    break;
	     case 'C': cout << "Has elegido la opción C" << endl;
		    break;
		 default: cout << "La opción es incorrecta" << endl;		   
		}
}