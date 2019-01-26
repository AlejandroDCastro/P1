#include <iostream>

using namespace std;



main() {

    float pes,alt,IMC;



    cout << "Introduce tu peso y luego tu altura:" << endl;

    cin >> pes;

    cin >> alt;



    IMC=pes/(alt*alt);


    cout << "IMC= " << IMC << "." << endl;



    if (IMC<16)

       cout << "Estás falto de peso." << endl;


    if (IMC>16 && IMC<25)

       cout << "Estás dentro de tu intervalo peso ideal." << endl;


    if (IMC>25)

       cout << "Tienes sobrepeso." << endl;

}