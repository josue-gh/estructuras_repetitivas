#include <iostream>
using namespace std;
int main(){
	
	int  n, num, nm;
	
	cout<<ingrese la cantidad de numeros<<endl;
	cin>> n ;
	
	
	
	for(int c=1 ; c<=n; c++){
		
		cout<<ingrese un numero <<endl;
		cin>> num ;
		
		if(c=1){
			
			nm=num ;
			
		}else{
			
			if(num>nm){
				
				nm=num;
				
			}
		}
			
	}
	
	cout<<el numero mayor es: <<endl;
	cout<< nm;
	
	return 0;
}
