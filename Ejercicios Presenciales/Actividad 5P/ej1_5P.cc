/* Diseñar un módulo recursivo que para un número natural n devuelva la suma de los
cuadrados de los números del 1 hasta el n. Por ejemplo, para n=4, el módulo debe devolver
 30 ya que 12+ 22 + 32 + 42 = 30. */
 
 #include <iostream>
 #include <cmath>
 using namespace std;
 
 int sumCuad (int);
 
 int sumCuad(int n) {
   int result;
   
   if (n==1)
   		result = 1;
   else 
   		result = pow(n,2) + sumCuad(n-1);
   		
   return (result);
}


int main() {
  int num;
  
  cout << "Introduce un número: ";
  cin >> num;
  
  cout << "La suma se los cuadrados desde 1 hasta " << num << " es " << sumCuad(num) << endl;
  
  return 0;
}     		
