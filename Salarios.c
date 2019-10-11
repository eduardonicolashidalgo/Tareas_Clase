/******************************************************************************

Columna2.- Se desea calcular el salario neto semanal de un trabajador en función 
del número de horas trabajadas y la tasa de impuestos:

Las primeras 35 horas de pagan a tarifa normal.
La tarifa horaria es de 40 dólares
Las horas que pasen de 35 se pagan a 1.5 veces la tarifa normal 

Las tasas de impuestos son:
1. Los primeros 1000 dólares son libres de impuestos.
2. Los siguientes 500 dólares tienen un 25% de impuestos. 
3. Los restantes ,un 45% de impuestos.

Se desea escribir el SALARIO BRUTO (salario antes de impuesto), TASAS DE IMPUESTOS,
Y SALARIO NETO (salario después de impuestos).
*******************************************************************************/
#include <stdio.h>
#define thoraria 40
#define thextra 60

void main()
{
    float htrab=0,salario=0,htrab1=0,salario1=0,salario2=0,salextra=0,salextra1=0,salextra2=0,salario3=0;
    printf("Ingrese sus horas de trabajo:");
    scanf("%f",&htrab);
    if(htrab>35) {
    salextra=(35*thoraria)+((htrab-35)*thextra);
        if(salextra>1000) {
            salario1=salextra-1000;
            if(salario1>0 && salario1<=500) {
                salario2=salario1/4;
            }else {
                if(salario1>500)
                    salario2=(salario1*45)/100;
            }
        }else {
    }
            salextra1=salextra+salario2;
            salextra2=salario+salextra;
            printf("Su salario es neto es: %2.f\nSu salario bruto es: %2.f\nSu impuesto es de: %2.f",salextra1,salextra,salario2);
    }else {
    salario=(htrab*thoraria);    
        if(salario>1000) {
            salario1=salario-1000;
            if(salario1>0 && salario1<=500) {
            salario2=salario1/4;
            salario3=salario+salario2;
            printf("Su salario es neto es: %2.f\nSu salario bruto es: %2.f\nSu impuesto es de: %2.f",salario3,salario,salario2);
            }else {
            }
        }else {
             printf("Su salario es neto es: %2.f\nSu salario bruto es: %2.f\nSu impuesto es de: 0",salario, salario);
        }
    }
}