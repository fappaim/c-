/* prog03.c
 Fazer um programa para ler um número do usuário e determinar se este número
 é par ou não par.
*/

#include<stdio.h>

int main(void)
{
    int n;  // um numero qualquer

    printf("informe um numero: ");
    scanf("%d",&n);
    if (n % 2 == 0)
        printf("o numero eh par\n");
    else
        printf("o numero nao eh par\n");
    return 0;
}

