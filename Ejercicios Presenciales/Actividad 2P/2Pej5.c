#include <iostream>
using namespace std;

int main()  {
    int num,x,y,esp;
	
	
	cout << "Introduce la altura del triángulo: ";
	cin >> num;
	
	for (x=1; x<=num; x++) {
	     for (esp=1; esp<=num-x; esp++)
		     cout << "0";
		 for (y=1; y<=x; y++)
			 cout << "*";
		 cout << endl;
	}
}