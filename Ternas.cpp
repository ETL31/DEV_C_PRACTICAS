#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;

float Pitagoras(float x,float y);
int TernPit(int a,int b,int c);
	
int main(){
	float m,n,r;
		
	cout<<"Hallaremos las ternas del 1 al 500....."<<endl;
	m=1;
	n=500;
	TernPit(m,n);	

	getch();
	return 0;
}

int Pitagoras(int x,int y){
	int pit;
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

int TernPit(int x,int y){
	
	int men=min(x,y);
	int mayor=max(x,y);
	
		for(int c=men+2;c<=mayor;c++){
		for(int b=men+1;b<c;b++){
			for(int a=men;a<b;a++){
				if(Pitagoras(a,b)=c){				
				cout<<"("<<a<<","<<b<<","<<c<<")"<<endl;
			}
			}
		}		
	}
}

