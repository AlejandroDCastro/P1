#include <iostream>

using namespace std;



main() {

    float num1,num2,num3,aux;



    cout << "Introduce 3 números por separado:" << endl;

    cin >> num1;

    cin >> num2;

    cin >> num3;



    if (num1<num3) {

       aux=num1;

       num1=num3;

       num3=aux;

    }

    if (num1<num2) {

       aux=num1;

       num1=num2;

       num2=aux;

    }

    if (num2<num3) {

       aux=num2;

       num2=num3;

       num3=aux;

    }


    cout << "El número mayor es " << num1 << ", el de en medio es " << num2 << " y el menor es " << num3 << "." << endl;

}