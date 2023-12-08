#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    //Declaración de variables
    int h1, m1, s1, ht, mt, st;

    //Entrada de datos
    cout<<"Ingrese el tiempo: "<<endl;
    cout<<"HORA: "<<endl;
    cin>>h1;
    cout<<"MINUTOS: "<<endl;
    cin>>m1;
    cout<<"SEGUNDOS: "<<endl;
    cin>>s1;
    
    cout<<"Su tiempo es: "<<"("<<h1<<":"<<m1<<":"<<s1<<")"<<endl;
    
    cout<<"Se le sumará 6 segundos a su tiempo"<<endl;
    
	cout<<"PROCESANDO ............................"<<endl;


    //Procesamiento
    
    ht=h1;
    mt=m1;
	st = s1 + 6;

    
    if (st >= 60)
    {
        st = st - 60;
        mt = mt + 1;             
    }
    
    if(mt>=60)
    {
        mt = mt - 60;
        ht = ht + 1;
    }

    //Salida de datos
    cout<<"El nuevo tiempo es: "<<"("<<ht<<":"<<mt<<":"<<st<<")"<<endl;
    return 0;
}
