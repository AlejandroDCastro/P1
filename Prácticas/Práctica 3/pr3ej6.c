#include <iostream>
using namespace std;

main() {
    float min,c1,c2,c3;
	
	cout << "Introduce el número de minutos que usted accede a internet de lunes a viernes entre las 8:00 y las 15:00 durante un mes:" << endl;
	cin >> min;
	
	c1=16+min*0.03;
	c2=15+min*0.06;
	c3=11+min*0.05;
	
	cout << "El coste mensual de PapaFon sería " << c1 << " euros, el de Movestor sería " << c2 << " euros, y el de Tevés sería " << c3 << " euros." << endl;
	
	if (c1<c2 & c1<c3)
		cout << "El coste más económico sería de " << c1 << " euros mensuales. Esta oferta es de Papafon." << endl;
	if (c2<c1 & c2<c3)
		cout << "El coste más económico sería de " << c2 << " euros mensuales. Esta oferta es de Movestor." << endl;
	if (c3<c1 & c3<c2)
		cout << "El coste más económico sería de " << c3 << " euros mensuales. Esta oferta es de Tevés." << endl;
}
