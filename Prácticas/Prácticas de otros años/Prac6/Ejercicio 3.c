// 4.Ejercicio resuelto 2. Repasa.
#include <iostream>
using namespace std;

void alReves(int );

int main() {
	int num;
	
	cout << "Introduce un número: ";
	cin >> num;
	
	alReves(num);
	return 0;
}

void alReves(int n) {
	if(n==0) {
		cout << endl;
	}
	else {
		cout << n%10;
		alReves(n/10);
	}
}