// prog10.cpp
// Fazer um programa para receber um número do usuário e decompô-lo em fatores primos.

#include<iostream>

using namespace std;

int main(void)
{
    int n; // um numero inteiro informado pelo usuario
    int i;  // auxiliar nos calculos
    int div;    // divisores de n

    cout << "informe um numero inteiro: ";
    cin >> n;

    div = 2;
    i = 2;

    while ( n >= 2 )
    {
        while (i <= div)
        {
            if (div % i == 0)
                break;
            i++;
        }

        if (i > div/2)
        {
            // o numero div gerado eh primo"
            // teste para verificar se div pode ser divisor de n

            if (n % div == 0)
            {
                cout << div << " / ";
                n = n / div;
            }
            else
            {
                div = div + 1;
            }
        }
        else
        {
                div = div + 1;
        }
    }
    return 0;
}

