#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, i, aux;
    scanf("%d %d", &x, &y);

    if(x>y)
    {
        aux=x;
        x=y;
        y=aux;

    }
    int somaImpares = 0;
    for(i=x;i<=y;i++)
        if(i%2 != 0)
        {
            somaImpares += i;
        }
    {
    }
    printf("\nSoma dos impares entre %d e %d = %d ",x,y,somaImpares);
    return 0;
}
