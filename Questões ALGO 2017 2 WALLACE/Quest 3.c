#include <stdio.h>
#include <stdlib.h>

//Calcule mostre a media entre os numeros pares de 1 a 100


int main()
{
    int i;
    float media = 0;
    int somaPares = 0, quantPares = 0;

    for(i=1;i<=100;i++)
    {
        if(i%2 == 0)
        {
            somaPares += i; // somaPares = somaPares = + i;
            quantPares++; // quantPares = quantPares + 1;
        }//fim if
    }//fim for
    media = (float) somaPares / quantPares;
    printf("\nMedia = %f", media);
    return 0;
}
