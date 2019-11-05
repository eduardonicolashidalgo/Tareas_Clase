/******************************************************************************
Realizar un programa en C que calcule el area del circulo,factorial y tabla de multiplicar
determinar si es par o impar
grupo de numeros cuantos pares e impares
*******************************************************************************/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
float areaCirculo (float);
//float areaCirculo (float radio);
int factorial (int);
int tablaMultp(int,int);
void numparimp(int);
int grupoNums(int);
void main()
{
    float radio;
    int num,tabla,lmt,op,num1,posi,neg;
    do
    {
    printf("MENU PRINCIPAL\n1.-Area del circulo\n2.-Factorial de un numero\n3.-Tabla de multiplicar\n4.-Numero par o impar\n5.-Cantidad de pares e impares\n6.-Salir");
    printf("\nIngrese su opcion:");
    scanf("%d",&op);
    switch (op) 
    {
        case 1:
            printf("Area del circulo");
            printf("\nIngrese el radio:");
            scanf("%f",&radio);
            printf("\nEl area del ciculo es:%.2f\n",areaCirculo(radio));//Llamada a la funcion
            getchar();getchar();
            system("clear");
        break;
        case 2:
            printf("Factorial de un numero\n");
            printf("Ingrese un numero:");
            scanf("%d",&num);
            printf("El factorial es: %d\n",factorial(num));
            getchar();getchar();
            system("clear");
        break;
        case 3:
            printf("\nIngrese la tabla de multiplicar:");
            scanf("%d",&tabla);
            printf("\nIngrese el limite:");
            scanf("%d",&lmt);
            tablaMultp(tabla,lmt);
            getchar();getchar();
            system("clear");
        break;
        case 4:
            printf("\nPar o impar");
            printf("\nIngrese un numero:");
            scanf("%d",&num);
            void numparimp(int num);
            getchar();getchar();
            system("clear");
        break;
        case 5:
            printf("Cantidad pares e impares\n");
            grupoNums(num);
            getchar();getchar();
            system("clear");
        break;
    }
    }while(op<=5);
}
float areaCirculo(float radio)
{
    float a=0, pi=3.1416;
    a=pi*pow(radio,2);
    return a;
}
int factorial(int num)
{
    int fact=1,cont=1;
    while(cont<=num)
    {
        fact=fact*cont;
        cont++;
    }
    return fact;
}
int tablaMultp(int tabla,int lmt)
{
    int multp=1,cont=1;
    while(cont<=lmt)
    {
        multp=tabla*cont;
        printf("%dx%d=%d\n",tabla,cont,multp);
        cont++;
    }
    return multp;
}
void numparimp(int num)
{
    if(num%2==0&&num!=0)
    {
        printf("Par\n");
    }else {
        printf("Impar");
    }
}
int grupoNums(int num)
{
    int par=0,imp=0;
    num=1;
    
    while(num!=0)
    {
        printf("\nIngrese un numero:");
    scanf("%d",&num);
        if(num%2==0&&num!=0){
            par++;
        }else if(num!=0) {
            imp++;
        }
   
    }
   printf("La cantidad de pares son:%d\nLa cantidad de impares son:%d\n",par,imp); 
}

