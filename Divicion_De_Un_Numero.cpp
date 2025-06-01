#include<iostream>
using namespace std;
int main(){
	
	int n1, n2, s, c;
	
	cout<<"ingrese un numero mayor" <<endl;
	cin>> n1;
	
	cout<<"ingrese un numero menor" <<endl;
	cin>> n2;
	
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
	
	return 0;
}
