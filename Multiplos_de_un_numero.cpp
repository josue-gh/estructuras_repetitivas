#include<iostream>
using namespace std;
int main()
{
	int n, m;
	
	cout<<ingrese un numero ;
	cin>> n;
	
	m=0 ;
	
	cout<<los primeros 10 multiplos de ,n, son: ;
	
	for(int i=1; i<=10; i++)
	{
		m=m+n ;
		
		cout<< m <<endl ;
	}
	return 0; 
}
