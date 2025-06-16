#include <iostream>
using namespace std;
int main(){
	//Declaracion de variables
	int  n, num, nummayor;
	
	cout<<"bienbenidos a mi programa" <<endl;
	//ENTRADA
	cout<<"ingrese la cantidad de numeros"<<endl;
	cin>> n ;
	
	//PROCESO
	for(int c=1 ; c<=n; c++){
		
		cout<<"ingrese un numero" <<endl;
		cin>> num ;
		
		if(c==1){
			
			nummayor=num ;
			
		}else{
			
			if(num>nummayor){
				
				nummayor=num;
				
			}
		}
			
	}
	
	//SALIDA
	cout<<"el numero mayor es:" <<endl;
	cout<< nummayor<<endl;
	
	cout<<"gracias por su participacion" <<endl;
	return 0;
}
