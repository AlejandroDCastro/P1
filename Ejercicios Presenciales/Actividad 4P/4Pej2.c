#include <iostream>
#include <cmath>
using namespace std;

void datos(float& ,float& ,float& ,float& ,float& ,float& );
void precio(float& ,float& );

int main() {
	float pre1,pre2;
	
	precio(pre1,pre2);
	
	cout << "El precio de la horchata pequeña es " << pre1 << ", y el de la horchata grande es " << pre2 << "." << endl;
	
	if (pre1<pre2)
		cout << "El tamaño pequeño es la mejor compra." << endl;
	else
		cout << "El tamaño grande es la mejor compra." << endl;
	
	return (0);
}

void datos(float &d1,float &a1,float &d2,float &a2,float &p1,float &p2) {
	
	cout << "Introduce los datos de la horchata pequeña." << endl;
	cout << "Diámetro del vaso(cm): ";
	cin >> d1;
	cout << "Altura del vaso(cm): ";
	cin >> a1;
	cout << "Precio(€): ";
	cin >> p1;
	cout << endl;
	
	cout << "Introduce los datos de la horchata grande." << endl;
	cout << "Diámetro(cm): ";
	cin >> d2;
	cout << "Altura(cm): ";
	cin >> a2;
	cout << "Precio(€): ";
	cin >> p2;
	cout << endl;
}


void precio(float &pre1,float &pre2) {
	float d1,a1,d2,a2,p1,p2;
	float vol1,vol2;
	
	datos(d1,a1,d2,a2,p1,p2);
	
	vol1=(a1)*(3.14)*(pow((d1/2),2));
	vol2=(a2)*(3.14)*(pow((d2/2),2));
	
	pre1=p1/vol1;
	pre2=p2/vol2;
}