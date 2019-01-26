#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
const int kENT=7;

bool logNum();
void modulo(bool ,int [][kENT]);

int main() {
	int matriz[kENT][kENT],i,j;
	bool log;
	
	srand(time(NULL));
	log=logNum();
	modulo(log,matriz);
	for(i=0; i<kENT; i++) {
		cout << endl;
		for(j=0; j<kENT; j++) {
			cout << matriz[i][j] << " ";
		}
	}
	cout << endl;
	return 0;
}

bool logNum() {
	int n;
	bool b;
	
	n=1+rand()%(50+1-1);
	if (n%2==0)
		b=true;
	else
		b=false;
	return b;
}

void modulo(bool log,int v[][kENT]) {
	int i,j;
	
	for(i=0; i<kENT; i++) {
		for(j=0; j<kENT; j++) {
			cout << "Introduce el valor de A" << i+1 << j+1 << ": ";
			cin >> v[i][j];
		}
	}

	for(i=0; i<kENT; i++) {
		if (log==true) {
			for(j=0; j<i; j++) {
				v[i][j]=0;
			}
		}
		else {
			for(j=i+1; j<kENT; j++) {
				v[i][j]=0;
			}
		}
	}
}

