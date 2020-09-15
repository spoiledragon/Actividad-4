
#ifndef PERSONAJE_H
#define PERSONAJE_H
#include <stdio.h>
struct personaje
{
    char nombre[20];
    char tipo[20];
    float fuerza;
    int salud;

}personaje[5];

unsigned int cont=0;

void capturarp(){
if(cont<5){
    printf("Nombre: \n");
    scanf("%s",personaje[cont].nombre);
    fflush(stdin);
    printf("Raza: \n");
    scanf("%s",personaje[cont].tipo);
    fflush(stdin);
    printf("Fuerza:  \n");
    scanf("%f",&personaje[cont].fuerza);
    fflush(stdin);
    printf("Salud: \n");
    scanf("%i",&personaje[cont].salud);
    fflush(stdin);
    cont++;}else
    {
        printf("Ya hay demaciados personajes \n");
    }
}

void mostrarp(){
    for(int i=0;i<cont;i++)
    {
        printf("Nombre: %s \n",personaje[i].nombre);
        printf("Tipo: %s \n",personaje[i].tipo);
        printf("Fuerza: %f \n",personaje[i].fuerza);
        printf("Salud: %i \n",personaje[i].salud);
        system("PAUSE");
    }
}



#endif PERSONAJE_H