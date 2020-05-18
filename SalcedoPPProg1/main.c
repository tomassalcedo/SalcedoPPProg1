#include <stdio.h>
#include <stdlib.h>


float realizarDescuento(float precio);





int main()
{

     float precioProducto;

    printf("Ingrese el precio del producto: ");
    scanf("%f",&precioProducto);



    realizarDescuento(precioProducto);

    printf("El precio con descuento es: %.2f",realizarDescuento(precioProducto));







    return 0;
}


float realizarDescuento(float precio)
{
  float precioFinal;

   precioFinal=precio-((precio*5) /100);


   return precioFinal;
}



