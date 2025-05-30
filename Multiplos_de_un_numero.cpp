#include<iostream>
using namespace std;
int main()
{
	int n, m;
	
	cout<<"ingrese un numero "<<endl;
	cin>> n;
	
	cout<<"el multiplo de un numero es el mismo numero multiplicado por los numeros entero positivos, como por ejemplo:  "<<endl;
	
	m=0 ;
	
	cout<<"los primeros 10 multiplos de tu numero son: "<<endl;
	
	for(int i=1; i<=10; i++)
	{
		m=m+n ;
		
		cout<< m <<endl ;
	}
	return 0; 
}
