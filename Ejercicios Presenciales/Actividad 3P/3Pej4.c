#include <iostream>
using namespace std;

int main () {
	int total;
	
	proceso(total);
}

int proceso(int &total) {
	int n1,n2,n3,n4,n5,n6,num,x;
	
	for (x=1; x<=6; x++) {
		
		num=0;
		
		cout << "Introduce un número natural entre 1 y 9, incluidos:" << endl;
		cin >> num;
		
		if (num!=-1) {
		
			if (x=1)
				n1=num;
			if (x=2)
				n2=num;
			if (x=3)
				n3=num;
			if (x=4)
				n4=num;
			if (x=5)
				n5=num;
			if (x=6)
				n6=num;
		}
		
		else
			x=6;

	}
	
	
	
	
	