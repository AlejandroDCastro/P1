#include <iostream>
using namespace std;

int nCrecientes(int );

int main() {
	int num;
	
	cout << "Introduce un número: ";
	cin >> num;
	
	nCrecientes(num);
	cout << endl;

	return (0);
}

int nCrecientes (int n){

	if (n==1)
		cout << n;
	else{
		nCrecientes(n-1);
		cout << " " << n;
	}
}