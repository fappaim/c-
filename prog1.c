/* prog01.c
 Fazer um programa para receber um número inteiro de segundos do usuário e
 imprimir a quantidade correspondente em horas, minutos e segundos
*/

#include<stdio.h>

int main(void)
{
    int n; //a quantidade de segundos informada pelo usuario
    int seg;    // a quantidade calculada de segundos
    int min;    // a quantidade calculada de minutos
    int horas;  // a quantidade calculada de horas
    int aux;    // variavel auxiliar nos calculos

    printf("informe a quantidade de segundos: ");
    scanf("%d",&n);
    horas = n / 3600;   // quantidade de horas
    aux = n - horas*3600;
    min = aux / 60;     // quantidade de minutos
    seg = n - horas*3600 - min*60;  // quantidade de segundos
    printf("quantidade de horas: %d\n", horas);
    printf("quantidade de minutos: %d\n", min);
    printf("quantidade de segundos: %d\n", seg);
    return 0;
}

