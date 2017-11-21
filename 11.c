#include <stdlib.h>
#include <stdio.h>
#include <time.h>
int main()
{

    srand(time(NULL));

    int num_sorteado = rand()%100;
    int num;

    do{
        printf("\nDigite um numero: ");
        scanf("%d", &num);
        if(num>num_sorteado){
            printf("\n%d e maior que o sorteado",num);
        }
        else if(num<num_sorteado){
            printf("\n%d e menor que o sorteado", num);
        }



    }while(num != num_sorteado);



printf("\nVoce acertou o numero sorteado %d", num_sorteado);
return 0;
}
