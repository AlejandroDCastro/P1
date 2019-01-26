#include <iostream>
using namespace std;

int main() {
    int x,y,lineas,z,w;

    cout << "Introduce el número de filas de las figuras a representar: ";
    cin >> lineas;

    for (x=1; x<=lineas; x++) {
        for (y=lineas-x; y>=0; y--)
            cout << "*";
        cout << endl;
    }
    
    cout << endl;
    
    for (x=1; x<=lineas; x++) {
        for (y=2; y<=x; y++)
            cout << " ";
        for (z=1; y<=lineas+1; y++)
        cout << "*";
        cout << endl;
    }
    
    cout << endl;
	for (x=1; x<=lineas; x++) {
        for (y=1; y<=lineas-x; y++)
			cout << " ";
		for (z=y; z<=lineas; z++)
			cout << "*";
		for (w=2; w<=x; w++)
			cout << "*";
		cout << endl;


	}		
	
}