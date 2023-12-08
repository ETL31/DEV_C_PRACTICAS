#include<iostream>
#include<math.h>
using namespace std;
int main(){
	float C[3],P[3],r;
	
	cout<<"Ingrese las coordenadas del centro de la esfera:"<<endl;
	
	for(int i=0;i<3;i++){
		cout<<"h"<<i+1<<"=";
		cin>>C[i];
	}
	
	cout<<"\nIngrese el radio de la esfera: ";
	cin>>r;
	
	cout<<"Centro="<<"("<<C[0]<<","<<C[1]<<","<<C[2]<<") y radio="<<r<<endl;
	
	cout<<"\nIngrese las coordenadas de un punto cualquiera:"<<endl;
	for(int i=0;i<3;i++){
		cout<<"m"<<i+1<<"=";
		cin>>P[i];
	}
	
	//Verificaremos si este punto esta o no dentro de la esfera
	float r1;
	r1=sqrt(pow((C[0]-P[0]),2)+pow((C[1]-P[1]),2)+pow((C[2]-P[2]),2));
	
	if(r*r>=r1){
		cout<<"\nEl punto (m1,m2,m3)="<<"("<<P[0]<<","<<P[1]<<","<<P[2]<<") si pertenece a la esfera"<<endl;
	}
	else{
		cout<<"\nEl punto (m1,m2,m3)="<<"("<<P[0]<<","<<P[1]<<","<<P[2]<<") no pertenece a la esfera"<<endl;
	}
}
