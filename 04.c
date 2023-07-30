#include <stdio.h>
int main(){

int num1, num2;

    do{
        printf("Digite um numero: ");
            scanf("%d", &num1);

        printf("Digite outro numero: ");
            scanf("%d", &num2);
}   
    while(num1==num2);
getchar();
return 0;
}