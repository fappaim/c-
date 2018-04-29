// prog11.cpp
// Fazer um programa que sorteie um número de 0 a 100 e que permita
// que o usuário (sem conhecer o número sorteado) tente acertar.
// Caso não acerte, o programa deve imprimir uma mensagem informando se
// o número sorteado é maior ou menor que a tentativa feita.
// Ao acertar o número, o programa deve imprimir a quantidade de tentativas feitas.


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

    while (ale!=n)
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
    return 0;
}

