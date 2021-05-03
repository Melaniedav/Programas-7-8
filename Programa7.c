#include<stdio.h>

int main()
{
    /*Melanie Aguilar
    Equipo Amuke
    2 mayo 2021
    programa 7. valores reales, calcula el porcentaje de un valor numerico
    */ 
   
    float valorI, porcen, valorF; 
    printf("\n \nPrograma 7");
    printf("\n \n Ingrese el valorI deseado");
    scanf("%f, &valorI");
    printf("\n \n Ingrese el porcentaje deseado");
    scanf("%f, &porcen");
    valorF=porcen*valorI/100;
    printf("\n \n el resultado es %f, valorF");
    
     return 0;
    
}