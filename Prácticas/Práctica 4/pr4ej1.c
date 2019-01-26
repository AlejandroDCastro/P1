#include <iostream>
using namespace std;

int main() {
    float num;
	int x;
	char res;
	
	do {
		
	cout << "Introduce un número: ";
	cin >> num;
	
	for(x=1; x<=10; x++) {
	     cout << num*x << endl;
	} 
	
	cout << "Volver a repetir el proceso: Si(S) o No(N)" << endl;
	cin >> res;
	
	}  while (res=='S');
}