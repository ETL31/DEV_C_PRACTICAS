#include <iostream>
#include <stdio.h>
#include <conio.h>


using namespace std;

int main()
{
	int A[100],n,i,mayor=0;
	cout<<"Ingrese la cantidad de cifras del numero: ";
	cin>>n;
	
	for(int i=0;i<n;i++){
		cout<<"Ingrese una valor para la posicion ("<<i+1<<"): ";
		cin>>A[i];	
		if(A[i]>mayor){
		mayor=A[i];
	}
	}
	cout<<"\nEl numero ingresado es: "<<endl;
	for(i=0;i<n;i++){
		cout<< A[i];
	}
	
	cout<<"\nEl mayor elemento del numero es: "<<mayor<<endl;
	return 0;
}

