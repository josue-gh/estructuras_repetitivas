#include<iostream>
using namespace std;
int main(){
	
	int n1, n2, s, c;
	
	cout<<"programa de la divison de numero a traves de restas sucesivas"<<endl; 
	
	cout<<"ingrese un numero mayor" <<endl;
	cin>> n1;
	
	cout<<"ingrese un numero menor" <<endl;
	cin>> n2;
	
	if (n1>n1){
		s= n1;
	
	c=0;
	
	while(s>=n2){
		
		s=s-n2;
		
		c=c+1;
		
	}
	
	cout<<"la division es: "<<endl;
	cout<< c<<endl;
	
	cout<<"el residuo es: "<<endl;
	cout<<s;
	
	cout<<"gracias por su participacion"<<endl;
	} else {
		cout<<"Numeros no validos";
	}
	
	return 0;
}
