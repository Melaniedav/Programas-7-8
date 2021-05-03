#include<stdio.h>

int main()
{
    /*Melanie Aguilar
    Equipo Amuke
    2 mayo 2021
    programa 8. Valores reales, calcula el porcentaje de descuento en una tienda de ropa
    */ 
   
    float valorI, porcen, valorF; 
    printf("\n \nPrograma 8");
    printf("\n \n Ingrese el valorI de deseado"); //valorI es el precio de la blusa sin el descuento//
    scanf("%f, &valorI");
    printf("\n \n Ingrese el porcentaje de descuento"); //es igual a 30%//
    scanf("%f, &porcen");
    valorF=-(30*valorI/100)+valorI;
    printf("\n \n el resultado es %f, valorF");
    
    return 0;
    
}