#include <iostream>
using namespace std;

int fib(int num);

main(){
  int num, i;
  do {
    cout << "Introduce un número ";
    cin >> num;
	}while (num<1);
  for (i=1; i<=num; i++)	
    cout << fib(i) << " , ";
	cout << endl;	
}

int fib(int num){
  int res;
  
  if (num==1 || num==2)
    res=1;
  else
    res=fib(num-1)+fib(num-2);
  
  return(res);
}