#include <stdio.h>

int main(){
int total;
printf("Digite o numero de pessoas: ");
 scanf("%d", &total);

 int m = 0, f = 0, nb = 0, ou = 0;

 printf("Legenda de Generos, para:\nMasculino = M\nFeminino = F\nNao Binarios = N\nOutros = O\n\n");
    
 for (int i = 1; i <= total; i++) {
 char genero;
 printf("Digite o genero da pessoa %d: ", i);
  scanf(" %c", &genero);
    switch (genero) {
     case 'M':
     case 'm':
        m++;
        break;
            
     case 'F':
     case 'f':
        f++;
        break;

     case 'N':
     case 'n':
        nb++;
        break;

     case 'O':
     case 'o':
        ou++;
        break;

            default:
                printf("\nGenero invalido. Digite:\nMasculino = M\nFeminino = F\nNao Binarios = N\nOutros = O\n");
                i--; 
                break;
        }
    }

    printf("Numero de pessoas por genero:\n");
    printf("Masculinos: %d\n", m);
    printf("Femininos: %d\n", f);
    printf("Nao binarios: %d\n", nb);
    printf("Outros: %d\n", ou);
    getchar();
    return 0;
}
