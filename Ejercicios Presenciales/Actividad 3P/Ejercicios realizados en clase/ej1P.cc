/* Diseña una función lógica que devuelva true si las coordenadas que recibe 
  correspondientes a dos reinas en un tablero de ajedrez entran en conflicto. */

#include <iostream>
using namespace std;


int abs (int num){
  int result;
  
  if (num<0)
		result = (-1)*num;
  else result = num;
  
  return (result);
}

bool atacan(int x0, int y0, int x1, int y1){
  bool result;
  
  if ((x0==x1) || (y0==y1) || (abs(x1-x0)==abs(y1-y0)))
		 result = true;
  else  result = false;
  
  return (result);
}

int main() {

  int x0, y0, x1, y1;
  
  cout << "Coordenadas de una reina (x y): ";
  cin >> x0 >> y0;
  cout << "Coordenadas de otra reina (x y): ";
  cin >> x1 >> y1;
  
  // habría que comprobar que las coordenadas introducidas son válidas
  if (atacan(x0, y0, x1, y1) )
     cout << "Las reinas se atacan" << endl;
  else
     cout << "Las reinas no se atacan" << endl;
     
  return 0;   
}  
