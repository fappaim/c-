/* prog02.c
 Fazer um programa para receber 3 valores inteiros do usuário e mostrar a sua média
 (que pode não ser inteira).
*/

#include<stdio.h>

int main(void)
{
    int a,b,c;  // tres valores inteiros
    double media;    // a media dos tres valores

    printf("informe o primeiro numero: ");
    scanf("%d",&a);
    printf("informe o segundo numero: ");
    scanf("%d",&b);
    printf("informe o terceiro numero: ");
    scanf("%d",&c);
    media = (a+b+c)/3;
    printf("a media dos numeros e: %f\n",media);
    return 0;
}

