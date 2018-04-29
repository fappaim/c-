/* problema do aluno
Fazer um programa que tenha como entrada informações relativas aos alunos e suas notas.
Os alunos devem conter as seguintes informações:
Nome : campo do tipo string que pode ter até 50 posições
Ano de nascimento: campo do tipo inteiro que armazenará o ano de nascimento do aluno.
Nota: Campo numérico com ponto flutuante variando de 0 a 10
Baseado nessas informações realize e exiba as seguintes operações:
Posicionamento: Campo do tipo string que dirá se o aluno se encontra em uma das seguintes
posições: “Abaixo da média”, “Na média”, “Acima da média”
Exibir o nome e a idade do aluno que possui a maior e a menor nota.
*/

#include<stdio.h>
#include<string.h>


int main(void)
{
    char nome[50];    /* nome do aluno */
    char posicao[16]; /* posicionamento */
    int ano;        /* ano de nascimento do aluno */
    float nota;         /* nota do aluno */
    char nome_maior[50];  /* nome do aluno de maior nota */
    char nome_menor[50];    /* nome do aluno de menor nota */
    float maior_nota;    /* auxiliar no calculo da maior nota */
    float menor_nota;    /* auxiliar no calculo da menor nota */
    int idade_maior;    /* idade do aluino de maior nota */
    int idade_menor;    /* idade do aluno de menor nota */
    char resp;          /* deseja continuar? */

    maior_nota = -1;
    menor_nota = 11;

    do {
        printf("\ninforme os dados do aluno\n");
        printf("nome: ");
        scanf("%s",nome);
        printf("ano de nascimento: ");
        scanf("%d",&ano);
        printf("nota: ");
        scanf("%f",&nota);

        if (nota > maior_nota)
        {
            maior_nota = nota;
            strcpy(nome_maior,nome);
            idade_maior = 2012 - ano;
        }

        if (nota < menor_nota)
        {
            menor_nota = nota;
            strcpy(nome_menor,nome);
            idade_menor = 2012 - ano;
        }

        if (nota < 5.0)
            strcpy(posicao,"abaixo da media");
        else if (nota==5.0)
            strcpy(posicao,"na media");
            else
                strcpy(posicao,"acima da media");

        /* exibindo o resultado do aluno */

        printf("o aluno %s, tirou nota %3.2f e sua posicao e: %s\n",nome,nota,posicao);

        getchar();  /* para limpar o ultimo enter digitado */

        printf("deseja continuar (s/n): ");
        scanf("%c",&resp);

    } while (resp=='s');

    /* exibindo o resultado geral */

    printf("o aluno %s, tirou nota %3.2f e sua idade e: %d\n",nome_maior,maior_nota,idade_maior);
    printf("o aluno %s, tirou nota %3.2f e sua idade e: %d\n",nome_menor,menor_nota,idade_menor);

    return 0;
}

