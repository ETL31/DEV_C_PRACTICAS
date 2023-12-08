#include<iostream>
using namespace std;
int main(){

int p,q;
	
	cout<<"Introduzca la dimension del vector A: ";
	cin>>p;
	cout<<"Introduzca la dimension del vector B: ";
	cin>>q;
	
	int VectorA[p],VectorB[q],VectorC[p+q];
	
	cout<<"Coloque los datos del Vector A: "<<endl;
	for(int i=0;i<p;i++)
	{
		cout<<"VectorA["<<i<<"]=";
		cin>>VectorA[i];
	}
	
	cout<<"Coloque los datos del Vector B: "<<endl;
	for(int i=0;i<q;i++)
	{
		cout<<"Vector B["<<i<<"]=";
		cin>>VectorB[i];
	}
	
	cout<<"Los vectores ingresados son: "<<endl;
	for(int i=0;i<p;i++)
	{
		cout<<VectorA[i]<<" ";
	}
	
	cout<<endl;
	for(int i=0;i<q;i++)
	{
		cout<<VectorB[i]<<" ";
	}
	
	cout<<"Combinando vectores........"<<endl;
	for(int i=0;i<p;i++)
	{
		VectorC[i]=VectorA[i];
	}
	for(int i=0;i<q;i++)
	{
		VectorC[p+i]=VectorB[i];
	}
	
	int k;
	for(int i=0;i<p+q;i++)
	{
		for(int j=i+1;j<p+q;j++){
			if(VectorC[j]<VectorC[i]){
				k=VectorC[j];
				VectorC[j]=VectorC[i];
				VectorC[i]=k;
			}
		}
	}
	
	cout<<"El vector resultante es: "<<endl;
	for(int i=0;i<p+q;i++)
	{
		cout<<VectorC[i]<<" ";
	}
	
}
