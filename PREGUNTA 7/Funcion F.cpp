#include <iostream>
#include <cmath>
#include <stdio.h>
using namespace std;
#define PI 3.14159265358979323846

int main(){
	
	double x,y,f;
	
	cout<<"Ingrese el primer elemento (X)"<<endl;
	cin>>x;
	
	cout<<"Ingrese el segundo elemento (Y) "<<endl;
	cin>>y;
	
	f=sqrt(pow(1.352,x+y)+((fabs(exp(x)-exp(y)))*(sin(x)-(1/tan(y))/((log(y)/log(5))*pow(PI,x))))
	
	cout<<"El resultado de f("<<x<<","<<y<<") es:"<<f<<endl;
	
	return 0;
	}

