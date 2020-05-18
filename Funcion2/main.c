#include <stdio.h>
#include <stdlib.h>



int contarCaracteres(char cadena[], char caracter);

int main()
{

    char cadena[20];
    char caracter;

    printf("Ingrese cadena: ");
    fflush(stdin);
    scanf("%s",&cadena);

    printf("Ingrese caracter a contar: ");
    fflush(stdin);
    scanf("%c",&caracter);

    printf("Su cadena tiene: %d veces el caracter %c\n" ,contarCaracteres(cadena,caracter),caracter);



    return 0;
}



int contarCaracteres(char cadena[], char caracter)
{

    int cantidadCaracteres = 0;

    for(int i = 0; cadena[i] != '\0'; i++)
    {
        if(cadena[i] == caracter)
        {
            cantidadCaracteres++;
        }
    }

    return cantidadCaracteres;



}
