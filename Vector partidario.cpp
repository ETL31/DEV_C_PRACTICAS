#include <iostream>
#include <string>
#include <iomanip>
#include <stdlib.h>
using namespace std;



//Funcion que pide el orden del vector y luego lee sus elementos
void LeerV(int V[], int &dimen)
{
   cout<<"Ingrese el tamaño del vector? ";
   cin>>dimen;
   for (int p=0; p < dimen; p++)
       {
           cout<<"vector ["<<p<<"]: ";
           cin>>V[p];
       }
   cout<<"\n\n";  
}

//Funcion que muestra los elementos del vector
void MostrarV(int V[], int dimen)
{
   for (int p=0; p<dimen; p++)
   {
       cout<<setw(5)<<V[p];
       
   }
   cout<<"\n\n";  
}

int main()
{
   int V[20];
   int mx,dimen,cnt;
   LeerV(V,dimen);
   MostrarV(V,dimen);
   
   mx=V[1];
   for(cnt=3;cnt<dimen;cnt+=2)  // Buscamos mayor de los impares
   {
     if(mx<V[cnt])
       {
         mx=V[cnt];
       }  
   }


   for(cnt=0;cnt<dimen;cnt+=2)  // Comparamos con los pares
   {
     if(V[cnt] < mx)
       {
         cout<<"el vector NO  es partidario"<<"\n";
         return 1;
       }  
   }

   // Si llegamos hasta aqui, es que es partidario
   cout<<"El vector es partidario"<<"\n";
 
 system("pause");
 return 0;
}
