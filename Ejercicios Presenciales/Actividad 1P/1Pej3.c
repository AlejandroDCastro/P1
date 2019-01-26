#include <iostream>

using namespace std;


main()  {

    char let;



    cout << "Introduce una letra: ";

    cin >> let;



    switch (let) {

        case 'L': cout << "LUNES" << endl;

                break;

        case 'M': cout << "MARTES" << endl;

                break;

        case 'X': cout << "MIÉRCOLES" << endl;

                break;

        case 'J': cout << "JUEVES" << endl;

                break;

        case 'V': cout << "VIERNES" << endl;

                break;

        case 'S': cout << "SÁBADO" << endl;

                break;

        case 'D': cout << "DOMINGO" << endl;

                break;

        
        default: cout << "letra errónea" << endl;

    }

}