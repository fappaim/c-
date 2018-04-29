// problema do array
// Escreva um programa em C que preencha um vetor de 100 posições com os números de 1 a 100.
// A partir do vetor criado:
// imprima os números em ordem decrescente
// imprima somente os números pares

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(void)
{
    int v[100];    // o vetor que contera 100 valores
    int i,j; // subscritor para os vetores
    int aux;   // auxiliar no processo de ordenacao

    srand(time(NULL));    // inicializa o gerador de numeros aleatorios

    //sintaxe da funcao rand()
    //ale = menor valor + rand() % (maior valor - menor valor)
    //ale = 0 + rand() % (100-0);

    // carregando o vetor com 100 numeros

    i = 0;

    while (i < 100)
    {
        v[i] =  rand() % 1000;    // ale eh o numero aleatorio gerado
        i++;
    }

    // exibindo os pares

    cout << "so os pares\n";

    i = 0;

    while (i < 100)
    {
        if (v[i] % 2 == 0)
            cout << v[i] << "\t";
        i++;
    }

    // ordenando pelo metodo bolha

    for (i=0; i < 100; i++ )
    {
        for (j=i+1; j<100; j++)
        {
            if ( v[i] > v[j] )
            {
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }

    // exibindo os numeros em ordem decrecente

    cout << "\nordem decrescente\n";

    i = 99;

    while (i >= 0)
    {
        cout << v[i] << "\t";
        i--;
    }

    return 0;
}

