#include <iostream>
#include <cstdlib>
using namespace std;
    

void generarNum(int &num1,int &num2) {
    int n;
    do {
    
    srand((unsigned)time(NULL));
    num1=rand()%n;
    num2=rand()%n;
    
    } while (num1<1 && num2<1 && num1>100 && num2>100);
}

int muestraOperacion(int num1, int num2) {
    
    cout << "   " << num1 << endl;
    cout << "+  X" << endl;
    cout << endl;
    cout << "____" << endl;
    cout << "   " << num2 << endl;
}

int solicitarNum(int X) {
    cout << "Introduce un número positivo o negativo que cumpla la operación: ";
    cin >> X;
    
    return (X);
}
    
void comprobar(int X, int num1,int num2, bool &comp, int &veces) {
    if ((X+num1)==num2)
        comp=true;
    veces++;
}

int main() {
    int num1,num2,X,veces,aciertos,fallos;
    bool comp,jugar;
    char otravez;
    
    do {
    
    jugar=false;
    
    veces=0;
    
    do {
    aciertos=0;
    fallos=0;
    
    comp=false;
    
    generarNum(num1,num2);
    
    muestraOperacion(num1,num2);
    
    solicitarNum(X);
    
    comprobar(X,num1,num2,comp,veces);
    
    cout << "   " << num1 << endl;
    cout << "+  X" << endl;
    cout << endl;
    cout << "____" << endl;
    cout << "   " << num2 << endl;
    
    if (comp==true) {
        cout << "X vale " << X << endl;
        
        aciertos++;
    }
    else
        cout << "X vale " << X << endl;
        
        fallos++;
    
        cout << "ACERTASTE " << aciertos << endl;
        cout << "FALLASTE " << fallos << endl;
    } while (veces<=4);
    
    cout << "Conseguiste " << aciertos << " aciertos." << endl;
    cout << "Tuviste " << fallos << " fallos." << endl;
    
    cout << "Quieres intentarlo otra vez --'S'(s) o 'N'(no)--: " << endl;
    cin >> otravez;
    
    if (otravez=='S')
        jugar=false;
    else
        jugar=true;
    
    } while (jugar=false);
}
