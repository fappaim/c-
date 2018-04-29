// prog09.cpp
// Fazer um programa para receber um número inteiro do usuário e
// determinar se este número é primo ou não.

#include<iostream>

using namespace std;

int main(void)
{
    int n; // um numero inteiro qualquer
    int j;  // auxiliar nos calculos

    cout << "informe um numero inteiro: ";
    cin >> n;

    if (n!=2 && n%2 ==0)
    {
        cout << "o numero informado nao eh primo pois eh par\n";
    }
    else
    {
        // o numero informado eh impar
        // descobrir se ele eh divisivel por
        // numero menor que ele

        j = 2;

        while (j <= n/2)
        {
            if (n % j == 0)
                break;
            j++;
        }
    }

    if (j > n/2)
        cout << "o numero informado eh primo\n";
    else
        cout << "o numero informado nao eh primo\n";
    return 0;
}

