/* prog05.cpp
 Fazer um programa que recebe 3 valores não inteiros do usuário e
 mostra o maior deles, o menor deles e a média
*/

#include<stdio.h>

int main(void)
{
    float x,y,z; /* valores fornecidos pelo usuario */
    float maior, menor, media;

    printf("informe o valor de x: ");
    scanf("%f",&x);
    printf("informe o valor de y: ");
    scanf("%f",&y);
    printf("informe o valor de z: ");
    scanf("%f",&z);

    /* calculo da media */

    media = (x+y+z)/3;

    /* descobrindo o maior valor */

    if (x > y && x > z)
        maior = x;

    if (y > x && y > z)
        maior = y;

    if (z > x && z > y)
        maior = z;

    /* descobrindo o menor valor */

    if (x < y && x < z)
        menor = x;

    if (y < x && y < z)
        menor = y;

    if (z < x && z < y)
        menor = z;

    /* resultados */

    printf("maior valor: %f\n",maior);
    printf("menor valor: %f\n",menor);
    printf("media dos valores: %f\n",media);

    return 0;
}

