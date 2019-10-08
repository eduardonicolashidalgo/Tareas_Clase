/******************************************************************************

Realizar un programa que determine si una persona es mayor o menor de edad.

Datos de entrada

Entero: edad

Proceso

Ingresar el valor de edad
printf ("Ingrese su edad")
scanf (edad)
If (edad >= 18)
    printf ("Mayor de edad")
else
    print ("Menor de edad")
Endif

Salida 

Mayor o menor de edad
*******************************************************************************/
#include <stdio.h>

void main()
{
    int edad;
    char nombre[12];
    printf("Ingrese su nombre:");
    scanf("%s",nombre);
    printf("Ingrese su edad:");
    scanf("%d",&edad);
    if (edad>=18)
        printf("%s es mayor de edad",nombre);
    else
        printf("%s es menor de edad",nombre);
}
