#include <iostream>
using namespace std;

int main() {
    int x,y,a,b,c,d,val,var;
	
	val=0;
	
	cout << "Introduce el número de valores que deseas representar: ";
	cin >> val;
	
	cout << "Introduce coeficiente a: ";
	cin >> a;
	cout << "Introduce coeficiente b: ";
	cin >> b;
	cout << "Introduce coeficiente c: ";
	cin >> c;
	cout << "Introduce coeficiente d: ";
	cin >> d;
	
	if (a>=0 && b>=0 && c>=0 && d>=0 && val>=0) {
	
	for (x=0; x<val; x++) {
	     y=(a*x*x*x)+(b*x*x)+(c*x)+d;
	    for (var=1; var<y; var++) {
	         cout << " ";
		}
        cout << "*" << endl;
	}
	}
	
	else
		cout << "Error. El número de valores y los coeficientes deben ser mayor o igual que 0" << endl;
}