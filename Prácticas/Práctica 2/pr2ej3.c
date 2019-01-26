#include <iostream>
#include <cmath>
using namespace std;

main() {
     float x,t,n,f;
	 
	 x=0.5;
	 t=0.2;
	 
	 cout << "Introduce un número de personas: ";
	 cin >> n;
	 
	 f=1/pow((1-x*t),n);
	 cout << "Hay que realizar " << f << " fotos" << endl;
}