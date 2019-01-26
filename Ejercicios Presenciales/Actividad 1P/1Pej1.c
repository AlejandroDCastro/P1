#include <iostream>

using namespace std;



main()  {

    char let1,let2,let3;



    
cout << "Introduce tres letras: " << endl;

    cin >> let1;

    cin >> let2;

    cin >> let3;



    if (let1>let2 && let1>let3)

        cout << "La letra mayor es " << let1 << endl;

    if (let2>let1 && let2>let3)

        cout << "La letra mayor es " << let2 << endl;

    if (let3>let1 && let3>let2)

        cout << "La letra mayor es " << let3 << endl;

}