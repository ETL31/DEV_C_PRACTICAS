#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;

float Pitagoras(float x,float y);
	
int main(){
	float m,n,r;
	cout<<"Ingrese dos numeros "<<endl;
	cout<<"Primer numero: "<<endl;
	cin>>m;
	cout<<"Segundo numero: "<<endl;
	cin>>n;
	
	r=Pitagoras(m,n);
	
	cout<<"El resultado es: "<<r<<endl;
	
	getch();
	return 0;
}

float Pitagoras(float x,float y){
	float pit;
	if(x>0&&y>0){
	cout<<"Procesando ........."<<"sqrt("<<x<<"^2"<<"+"<<y<<"^2)"<<endl;
	pit=sqrt(pow(x,2)+pow(y,2));
	
	return pit;
	}
	else{
		cout<<"No se puede proceder debido a que se ingresaron numeros negativos "<<endl;
		return 0;
	}
}

