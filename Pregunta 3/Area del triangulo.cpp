#include <iostream>
#include <cmath>
using namespace std;
#define PI 3.14159265358979323846

int main(){
	
	float lad1,lad2,m,area;
	
	cout<<"Ingrese el lado 1 del triangulo: "<<endl;
	cin>>lad1;
	
	cout<<"Ingrese el lado 2 del triangulo: "<<endl;
	cin>>lad2;
	
	cout<<"Ingrese el grado en el sistema sexagesimal entre los dos lados: "<<endl;
	cin>>m;
	
	
	area=(lad1*lad2*sin(m*PI/180))/2;
	
	
	cout<<"El area del triangulo es:"<<area<<endl;
	
	return 0;
		
}
