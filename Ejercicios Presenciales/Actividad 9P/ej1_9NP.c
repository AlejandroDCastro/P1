#include <iostream>
#include <math.h>
using namespace std;

typedef struct{
  int x;
  int y;
}TPunto;

TPunto lee();
float longitud (TPunto p1, TPunto p2);
float pendiente (TPunto p1, TPunto p2);
bool distinto(TPunto p1, TPunto p2);

int main(){
  TPunto p1, p2;
  float pend;
  
  do{
    cout << "LECTURA PRIMER PUNTO" << endl;
    p1=lee();
    cout << "LECTURA SEGUNDO PUNTO" << endl;
    p2=lee();
    if (distinto(p1,p2)){
      cout << "longitud segmento " << longitud (p1,p2) << endl;
      pend=pendiente (p1,p2);
      if (pend!=100)
	       cout << "pendiente segmento " << pend << endl;
      else 
	       cout << "no se puede calcular la pendiente de un segmento vertical" << endl;
    }
  }while (distinto(p1,p2));
}

TPunto lee(){
  TPunto punto;
  
  cout << "Introduce la componente x: ";
  cin >> punto.x;
  cout << "Introduce la componente y: ";
  cin >> punto.y;
  return (punto);
}

float longitud (TPunto p1, TPunto p2){
  return (sqrt(pow(p1.x-p2.x,2)+pow(p1.y-p2.y,2)));
}

//si x2==x1 no se puede calcular la pendiente
float pendiente (TPunto p1, TPunto p2){
  float res;
  
  if (p1.x!=p2.x)
    res = (p2.y-p1.y)/(p2.x-p1.x);
  else
    res = 100; //valor de error;
  return (res);
}
  
bool distinto(TPunto p1, TPunto p2){
  bool res;
  
  if (p1.x==p2.x && p1.y==p2.y)
    res = false;
  else
    res = true;
  return (res);
}