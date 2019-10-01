#include <stdio.h>

void main()
{
    char nombre[15],desp1[10],desp2[10];
    int cedula;
    float cantP1,cantP2,precioP1,precioP2,subtotal=0,iva,total=0,pvtaP1=0,pvtaP2=0;
    printf("Ingrese el nombre del cliente:");
    scanf ("%s", &nombre);
    printf("Ingrese la cedula:");
    scanf("%d", &cedula);
    printf("Datos del producto 1\n");
    printf("Ingrese la descripcion del producto 1:");
    scanf("%s", &desp1);
    printf("Ingrese la cantida del producto 1:");
    scanf("%f", &cantP1);
    printf("Ingrese el precio:");
    scanf("%f", &precioP1);
    printf("Datos del producto 2\n");
    printf("Ingrese la descripcion del producto 2:");
    scanf("%s", &desp2);
    printf("Ingrese la cantida del producto 2:");
    scanf("%f", &cantP2);
    printf("Ingrese el precio:");
    scanf("%f", &precioP2);
    pvtaP1=cantP1*precioP1;
    pvtaP2=cantP2*precioP2;
    subtotal=pvtaP1+pvtaP2;
    iva=subtotal*0.12;
    total=subtotal+iva;
    printf("******EmpresaXYZ******\n");
    printf("Cliente: %s\n",nombre);
    printf("Cedula %d\n",cedula);
    printf("Descripcion\t\tCantidad\t\tPrecio\t\t\tPVnta\n");
    printf("%s\t\t\t%.2f\t\t\t%.2f\t\t\t%.2f\n",desp1,cantP1,precioP1,pvtaP1);
    printf("%s\t\t\t%.2f\t\t\t%.2f\t\t\t%.2f\n",desp2,cantP2,precioP2,pvtaP2);
    printf("\t\t\t\t\t\tSubtotal:%.2f\n",subtotal);
    printf("\t\t\t\t\t\tIva:%.2f\n",iva);
    printf("\t\t\t\t\t\tTotal:%.2f\n",total);
}
