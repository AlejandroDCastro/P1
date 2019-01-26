#include <iostream>

using namespace std;


main()  {

    float num1,num2,num3,aux;



    cout << "Introduce tres números: " << endl;

    cin >> num1;

    cin >> num2;

    cin >> num3;



    if (num2>num1) {

       aux=num2;

       num2=num1;

       num1=aux;

    }
    if (num3>num1) {

       aux=num3;

       num3=num1;

       num1=aux;

    }
    if (num3>num2) {

       aux=num3;

       num3=num2;

       num2=aux;

    }


    
    cout << "El número mayor es " << num1 << ", el intermedio es " << num2 << " y el menor es " << num3 << "." << endl;

}
