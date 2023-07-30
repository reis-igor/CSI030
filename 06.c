#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float x;
    int i, j, fatorial;
    float serie = 1;
    float potencia;
    float termo;
    int soma = 0; // quando em 1 faz soma e quando é 0 subtrai

    printf("Digite o valor do angulo:");
    scanf("%f", &x);

    for(i = 2; i<= 10; i+=2){
        potencia = pow(x, i);

        fatorial = 1;
        for(j = 2; j <= i; j++){
            fatorial *= j;
        }

        termo = potencia / fatorial;

        if(soma){
            serie += termo;
            soma = 0;
        } else {
            serie -= termo;
            soma = 1;
        }
    }

    printf("Cos(%f) = %f", x, serie);

    return 0;
}
