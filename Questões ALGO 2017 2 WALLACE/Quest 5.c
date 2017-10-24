#include <stdio.h>
#include <stdlib.h>

int main()
{
    long int num, fat=1, i;
    printf("\nDigite um numero ");
    scanf("%d", &num);

    //Calcular fatorial;
    for(i=num;i>1;i--){
        fat = fat * i;
    }
    printf("\n\nFatorial de %li = %li", num, fat);

    return 0;
    }
