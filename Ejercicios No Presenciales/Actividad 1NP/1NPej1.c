#include <iostream>
using namespace std;

main()  {
     int num;
	 
	 cout << "Introduce un número entero: ";
	 cin >> num;
	 
	 if (num%2==0)
	     cout << "Este número es par" << endl;
	else
	     cout << "Este número es impar" << endl;
}