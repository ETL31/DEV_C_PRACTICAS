#include<iostream>
using namespace std;
int const N=5;
int const MaxDatos =100;
int main(){
	int i,j,d,f,totalDatos;
	int Coleccion[MaxDatos];
	int histo[N];
	cout<<"Digite el numero de datos de la coleccion <=100";
	
	cin>>totalDatos;
	i=0;
	while(i<totalDatos){
		cout<<"Digite el dato Coleccion["<<i<<"] = ";
		cin>>Coleccion[i];
		i=i+1;
	}
	
	i=0;
	while(i<N){
		histo[i]=0;
		i=i+1;
	}
	
	i=0;
	while(i<totalDatos){
		d=Coleccion[i]-1;
		histo[d]=histo[d]+1;
		i++;
	}
	
	i=0;
	while(i<N){
		cout<<i+1<<" : ";
		f=histo[i];
		j=0;
		while(j<f){
			cout<<"*";
			j++;
		}
		cout<<endl;
		i++;
	}
	
}


