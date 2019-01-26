#include <iostream>

using namespace std;



main() {

    float a,b,c,aux;



    cout << "Introduce tres números, 'a', 'b' y 'c', respectivamente:" << endl;

    cin >> a;

    cin >> b;

    cin >> c;



    aux=b;

    b=a;

    a=c;

    c=aux;


    cout << "El nuevo valor de 'a' es " << a << ", el de 'b' es " << b << ", y el de 'c' es " << c << "." << endl;

}