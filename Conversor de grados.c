/******************************************************************************

Realizar un programa que transforme de grados centigrados o fahrenheit o
viceversa

*******************************************************************************/
#include <stdio.h>

void main()
{
    float cent, fahr, gradosc=0, gradosf=0;
    int op;
    printf("Menu principal\n1.Grados centigrados a fahrenheit\n2.Grados fahrenheit a centigrados");
    printf("\n.Eliga una opcion:");
    scanf("%d",&op);
    if (op==1)
    {
        printf("Ingrese los grados centigrados:");
        scanf("%f",&cent);
        gradosf=((cent*9)/5)-32;
        printf("Grados fahrenheit:%2.f\n",gradosf);
    }
    else
    {
        printf("Ingrese los grados fahrenheit:");
        scanf("%f",&fahr);
        gradosc=((fahr-32)*5)/9;
        printf("Grados centigrados:%2.f\n",gradosc);
    }
}