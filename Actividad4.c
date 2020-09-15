#include <stdio.h>
#include <stdlib.h>
#include "personaje.h"
void capturar()
{
    int n[5],suma=0;
    for(int i=0;i<5;i++)//guardamos los enteros
    {printf("Inserte el entero en el espacio : %i \n", i+1);
    scanf("%i",&n[i]);}

    for(int i=0;i<5;i++) //suma
    {   printf("%i \n",n[i]);
        suma=suma+n[i];}

    printf("el resultado es: %i \n ",suma);
    printf("el promedio es: %i \n ",suma/5);
    system("PAUSE");
    
}

void mostrar(int n, char cadena[])
{
    system("CLS");
    for(size_t i=0;i<n;i++)
    {printf("%s",cadena);}
    system("PAUSE");
}

int main()
{
    char opc,cadena[50];
    int veces;
    do
    {
        system("CLS");
        fflush(stdin);
        printf("1. Capturar enteros \n");
        printf("2. Mostrar Cadena n veces \n");
        printf("3. Agregar Personaje \n");
        printf("4. Mostrar Personaje \n");
        printf("0. salir \n");
        scanf("%c",&opc);
        fflush(stdin);

        switch (opc)
        {
        case '1':
        capturar();
            break;
        case '2':
        printf("Inserte una cadena de caracteres \n");
        fgets(cadena,sizeof(cadena),stdin);
        fflush(stdin);
        printf("Cuantas veces \n");
        scanf("%i",&veces);
        mostrar(veces,cadena);
        break;

        case '3':
        capturarp();
        break;
        case '4':
        mostrarp();
        break;
        
        }
    } while (opc!= '0');
    
    return 0;
}