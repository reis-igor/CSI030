#include <stdio.h>
int main(){
int count = 1, idade2;
float idade;

    printf("Digite a idade dos seus alunos separadamente, ao finalizar envie -1 para concluir\nIdade do aluno %d:\n", count);
        scanf("%f", &idade);

while(idade != -1 && idade2 != -1){
    printf("Idade do aluno %d:\n", count);
        scanf("%d", &idade2);

     if(idade2 < 0){break;};

        count++;
        idade = idade + idade2;
}

    idade = idade/count;
    
    printf("A media das idades dos alunos eh: %.2f\n", idade);

getchar();

return 0;
}
