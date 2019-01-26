#include <iostream>
using namespace std;

main() {
    char let;
	
	cout << "Introduce una letra: ";
	cin >> let;
	
	if (let=='a' || let=='e' || let=='i' || let=='o' || let=='u' || let=='A' || let=='E' || let=='I' || let=='O' || let=='U') {
	     cout << "La letra es vocal." << endl;
	}
	else {
	     cout << "La letra es consonante." << endl;
	}
}