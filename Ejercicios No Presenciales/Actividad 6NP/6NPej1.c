#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int nAleatorio();
void filaUno();
void filaDemas(int );
void filaUltima(int );

int main() {
    
    filaUno();
	
	return (0);
    
}

int nAleatorio() {
     int num;
     
     do {
         
     srand(time(NULL));
     num=1+rand()%(16-1);
     
     } while(num%2==0);

    return (num);
}


void filaUno() {
    int x,y;
    
    y=nAleatorio();
    
    for(x=1; x<=y; x++) {
        cout << "*";
    }
    cout << endl;
    
    filaDemas(y);
}
    
    
void filaDemas(int y) {
    int x,z;
    
    for (z=3; z<=y; z++) {
    cout << "*";
    
        for (x=3; x<=y; x++) {
            cout << " ";
        }
    
    cout << "*" << endl;
    }
    
    filaUltima(y);
}
    
    
void filaUltima(int y) {
    int x;
    
    for(x=1; x<=y; x++) {
        cout << "*";
    }
    cout << endl;
}
    
    