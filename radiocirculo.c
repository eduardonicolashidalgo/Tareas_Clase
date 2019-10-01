#include <stdio.h>
//#include <math.h> 
#define pi 3.1416

void main()
{
     float radio, area=0;
     printf("Ingrese el radio");
     scanf("%f",&radio);
     area=pi*radio*radio;
     //area=pi*pow(radio,2);
     printf("El area es %f.", area); 
}

