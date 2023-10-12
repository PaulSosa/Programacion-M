#include <stdio.h>
#include <stdlib.h>

// Frecuencia de calificaciones.
// El programa, al recibir como datos las calificaciones de un grupo de 50 alumnos, obtiene la frecuencia de cada una de las calificaciones y adem�s
// escribe cu�l es la frecuencia m�s alta.

const int TAM = 50;
void Lectura(int *, int);
void Frecuencia(int , int, int , int);
void Impresion(int *, int);
void Mayor(int *, int);
void main(void)
{
    int CAL[TAM], FRE[6] = {0};
    Lectura(CAL, TAM);
    frecuencia(CAL, TAM, FRE, 6);
    printf("\n Frecuencia de Calificaciones\n");
    Impresion(FRE, 6);
    Mayor(FRE, 6);
    }
    void Lectura(int VEC[], int T)
    {
        int I;
        for (I=0; I<T; I++)
            {
                printf("Ingrese la calificaci�n -0:5- del alumno %d: ", I+1);
        scanf("%d", &VEC[I]);
            }
            }
            void Impresion(int VEC[], int T)
            {
                int I;
                for (I=0; I<T; I++)
                    printf("\n VEC[%d]: %d", I, VEC[I]);
                }
                void frecuencia(int A[], int P, int B[], int T)
                {
                    int I;
                    for (I=0; I<P; I++)
                        if ((A[I] >= 0) && (A[I] < 6))
                        B[A[I]]++;
                    }
                    void Mayor(int *X, int T)
                    {
                        int I, MFRE = 0, MVAL = X[0];
                        for (I=1; I<T; I++)
                            if (MVAL < X[I])
                            {
                                MFRE = I;
                        MVAL = X[I];
                        }
                        printf(" \n\n Mayor frecuencia de calificaciones: %d \tValor: %d", MFRE, MVAL);
                        }
