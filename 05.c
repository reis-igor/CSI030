#include <stdio.h>

int main() {
    
    int num_alunos;
    float soma_medias = 0, nota1, nota2, nota3, nota4;
    printf("Digite a quantidade de alunos: ");
    scanf("%d", &num_alunos);

    for (int i = 0; i < num_alunos; i++) {
        printf("Notas do aluno %d:\n", i+1);

        printf("Digite a primeira nota: ");
        scanf("%f", &nota1);

        printf("Digite a segunda nota: ");
        scanf("%f", &nota2);

        printf("Digite a terceira nota: ");
        scanf("%f", &nota3);

        printf("Digite a quarta nota: ");
        scanf("%f", &nota4);
        float media = (nota1 + nota2 + nota3 + nota4) / 4;

        soma_medias += media;

        char* resultado;
        if (media >= 6) {
            resultado = "Aprovado";
        } else {
            resultado = "Reprovado";
        }

        printf("Media do aluno %d: %.2f\n", i+1, media);
        printf("Resultado do aluno %d: %s\n\n", i+1, resultado);
    }

    float media_turma = soma_medias / num_alunos;

    printf("Media final da turma: %.2f\n", media_turma);

    getchar();
    return 0;
}
