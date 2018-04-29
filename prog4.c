/* prog04.c
 Fazer um programa  para receber valores inteiros X, Y e Z do usuário e
 determinar se estes valores podem formar os lados de um triângulo.
 Em caso afirmativo, informar se o triângulo é eqüilátero, isósceles ou escaleno.
*/

#include<stdio.h>

int main(void)
{
    int x,y,z; /* valores fornecidos pelo usuario */

    printf("informe o valor de x: ");
    scanf("%d",&x);
    printf("informe o valor de y: ");
    scanf("%d",&y);
    printf("informe o valor de z: ");
    scanf("%d",&z);

    if (x<y+z && y<x+z && z<x+y)
    {
        if (x==y && y==z)
        {
            printf("Triangulo equilatero\n");
        }
        else
        {
            if (x==y || x==z || y==z)
            {
                printf("Triangulo isoceles\n");
            }
            else
            {
                printf("Triangulo escaleno\n");
            }
        }
    }
    else
    {
        printf("Esses valores nao formam um triangulo\n");
    }
    return 0;
}

