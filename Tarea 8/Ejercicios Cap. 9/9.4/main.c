#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    char cad[50];
    FILE *ap;
    if ((ap = fopen ("arc.txt", "r")) != NULL)
        {
            while (!feof(ap))
            {
                fgets(cad, 50, ap);
    puts(cad); /* Despliega la cadena en la pantalla. */
    }
    fclose(ap);
    }
    else
        printf("No se puede abrir el archivo");
    }
