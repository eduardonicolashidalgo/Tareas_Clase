/******************************************************************************
Realizar un programa en C que permita ingresar n numeros positivos y verifique 
si es par o impar 
*******************************************************************************/
#include <stdio.h>

void main()
{
    int cont=1, cantNum, num;
    printf("Ingrese la cantidad de numeros:");
    scanf("%d",&cantNum);
    while(cont<=cantNum)
    {
        printf("Ingrese un numero:");
        scanf("%d",&num);
        while (num<0)
        {
            printf("Ingrese un numero positivo:");
            scanf("%d",&num);
            
        }
        if(num%2==0)
            printf("Par\n");
        else
            printf("Impar\n");
            
    cont++;    
    }
}
