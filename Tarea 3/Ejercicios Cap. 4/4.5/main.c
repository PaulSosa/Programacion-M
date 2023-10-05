#include <stdio.h>
#include <stdlib.h>

// Cubo -3.
//El programa calcula el cubo de los 10 primeros n�meros naturales con la ayuda de una funci�n y utilizando par�metros por valor.

int cubo (int); //Prototipo de funcion. El parametro es de tipo entero.
void main(void)
{
    int I;
    for (I = 1; I <= 10; I ++)
        printf("\n El cubo de I es: %d", cubo(I));
    //Llamada la funcion cubo. El paso del parametro es por valor.
}
int cubo (int K) //K es un parametro por valor de tipo entero. La funcion calcula el cubo del parametro K.
{
    return(K * K * K);
}
