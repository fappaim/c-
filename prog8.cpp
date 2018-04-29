// prog08.cpp
// Fazer um programa para mostrar todos os números perfeitos entre 1 e 100.

#include<iostream>

using namespace std;

int main(void)
{
    int n;  // os numeros de 1 a 100
    int quo;    // quociente da divisao de n por div
    int div;    // divisores de cont
    int soma;   // soma dos divisores de n

    n = 1;

    while (n <= 100)
    {
        soma=0;

        for (div = 1; div < n; div++)
        {
           quo = n % div;
           if (quo == 0)
               soma = soma + div;
        }
        if (soma == n)
            cout << n << "\t";
        n++;
    }
    return 0;
}

