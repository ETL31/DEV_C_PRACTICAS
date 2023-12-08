#include <iostream>
#include <stdio.h>
using namespace std;

int main(){

   long int b1,b2;
   int i=0,rec = 0,sum[20];

   cout<<"Ingresa el primer numero binario "<<endl;
   cin>>b1;
   cout<<"Ingresa el segundo numero binario "<<endl;
   cin>>b2;

   while(b1!=0||b2!=0){
        sum[i++] =  (b1%10 + b2%10 + rec ) % 2;
        rec = (b1 %10 + b2 %10 + rec ) / 2;
        b1 = b1/10;
        b2 = b2/10;
   }

   if(rec!=0)
        sum[i++] = rec;

   --i;
   cout<<"La suma binaria es: "<<endl;
   while(i>=0)
        printf("%d",sum[i--]);

  return 0;
}
