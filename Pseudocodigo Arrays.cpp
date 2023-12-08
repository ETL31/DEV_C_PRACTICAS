A,B,C: Vectores
p,q: enteros positivos
aux,i,j:enteros positivos

Inicio
Imprimir: "Introduzca la dimensión del vector A"
Leer: p
Imprimir: "Introduzca la dimensión del vector B"
Leer: q

A[p],B[q],C[p+q]

Imprimir: "Introduzca los datos del vector A"
Para(i=0 hasta i<p, i++)
Leer A[i]
fin Para

Imprimir: "Introduzca los datos del vector B"
Para(i=0 hasta i<q,i++)
Leer B[i]
fin Para

Imprimir: "Combinando los vectores "
Para(i=0 hasta i<p,i++)
C[i]->A[i]
Fin Para

Para(i=0 hasta i<q,i++)
C[i]->B[i]

Para(i=0 hasta i<p+q,i++)
Para(j=i+1 hasta j<p+q<j++)
SiC[j]<C[i]
aux=C[j]
C[j]=C[i]
C[i]=aux
fin Si
fin Para
fin Para
Imprimir: "El resultado es: "
Para(i=0 hasta i<p+q,i++)
Imprimir:C[i]
fin Para
fin 
salida C[i]
