#include <stdio.h>
#include<conio.h>
int main()
{ 
    float x,iva,r;
    
    printf("Bienvenido. Calcularemos el precio de un articulo sin el IVA.\n\n");
    
    printf("Por favor, introduzca el precio de la compra: ");
    scanf("%f",&x);
    
    iva=(16*x/100);
        r=x-iva;
    
    printf("\nEl precio del objeto sin IVA es %f\n\n",r);
    
    getch();//pausa
    
    return 0;
}    
