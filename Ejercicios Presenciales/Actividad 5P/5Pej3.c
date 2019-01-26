#include <iostream>
using namespace std;

int alReves(int num);

int main() {
    int num;

    cout << "Introduce un número: ";
    cin >> num;
    
    alReves(num);
}

int alReves(int n) {
    int dig;
    
    if (n==0){
        cout << endl;
        return (0);
    }
    else {
        dig=n%10;
        cout << dig;
        alReves(n/10);
    }
}