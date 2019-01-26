#include <iostream>
using namespace std;

int main() {
    int x,y,coc,rest;
	
	   cout << "Introduce dos números aparte(el primero mayor que el segundo):" << endl;
	   cin >> x;
	   cin >> y;
	   
	   coc=0;
	   rest=0;
	   
	   while (x>=y) {
	     x=x-y;
		 coc=coc+1;
		 rest=x;
	   }
	   
	   cout << "El cociente es " << coc << " y el resto " << rest << " .";
}