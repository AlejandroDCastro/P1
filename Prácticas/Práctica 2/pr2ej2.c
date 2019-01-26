#include <iostream>
using namespace std;

main() {
     float pes,alt,IMC;
	 
	 cout << "Introduce tu peso: ";
	 cin >> pes;
	 cout << "Introduce tu altura: ";
	 cin >> alt;
	 
	 IMC=pes/(alt*alt);
	 cout << "IMC= " << IMC << endl;
}