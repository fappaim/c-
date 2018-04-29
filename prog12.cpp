// prog12.cpp
// Faça um programa que sorteie um número aleatório entre 0 e 500 e
// pergunte ao usuário qual é o "número mágico". O programa deverá indicar
// se a tentativa efetuada pelo usuário é maior ou menor que o número mágico e
// contar o número de tentativas. Quando o usuário conseguir acertar o número o
// programa deverá classiﬁcar o usuário como:
//a. De 1 a 3 tentativas: muito sortudo
//b. De 4 a 6 tentativas: sortudo
//c. De 7 a 10 tentativas: normal
//d. > 10 tentativas: tente novamente

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(void)
{
    int n; // um numero inteiro informado pelo usuario
    int ale;    // o numero aleatorio gerado pelo programa
    int cont;  // contador das tentativas

    cont = 0;
    n = 0;

    srand(time(NULL));    // inicializa o gerador de numeros aleatorios
    ale =  rand() % 100;    // ale eh o numero aleatorio gerado

    //sintaxe da funcao rand()
    //ale = menor valor + rand() % (maior valor - menor valor)
    //ale = 0 + rand() % (100-0);

    while (ale!=n && cont < 10)
    {
        cout << "informe um numero inteiro: ";
        cin >> n;

        if (ale == n)
            break;

        if (ale > n)
            cout << "o numero sorteado eh maior que o numero informado\n";

        if (ale < n)
            cout << "o numero sorteado eh menor que o numero informado\n";

        cont++;
    }

    cout << "acertou com " << cont << " tentativas\n";

    if (cont < 3)
        cout << "muito sortudo\n";
    if (cont >= 4 && cont <= 6)
        cout << "sortudo\n";
    if (cont >= 7 && cont <= 10)
        cout << "normal\n";
    if (cont > 10)
        cout << "tente novamente\n";

    return 0;
}

