#include <stdio.h>

int main() {
    char nome[100];
    float nota1, nota2, media;

    printf("Nome do aluno: ");
    fgets(nome, sizeof(nome), stdin);

    printf("Primeira nota: ");
    scanf("%f", &nota1);

    printf("Segunda nota: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;

    printf("\nAluno: %s", nome);
    printf("Média: %.2f\n", media);

    if (media >= 7) {
        printf("Resultado: Aprovado\n");
    } else if (media >= 5) {
        printf("Resultado: Recuperação\n");
    } else {
        printf("Resultado: Reprovado\n");
    }

    return 0;
}