#include<iostream>
using namespace std;
#include<cmath>

double f(int x, int y){
	//Declaración de datos locales:
	double resultado;
	resultado: 2*pow(x,5)+sqrt(pow(x,3)/pow(y,2))/abs(x*y)-cos(y);
}
int main()
{
	int a,b;
	cout<<"ingresa el valor de X:"<<endl;
	cin>>a;
	cout<<"Ingresa ek valor de y:\n";
	cin>>b;
	
	cout<<"El resultado es:f("<<a<<","<<b<<")=<<"<<f(a,b)<<endl;
	
}
