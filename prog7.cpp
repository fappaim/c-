// prog07.cpp
// Fazer um programa para mostrar os 100 primeiros termos da série de Fibonacci.

#include<iostream>

using namespace std;

int main(void)
{
    int cont; // contador ate 100
    long int a,b,c;  // numeros da serie de fibinacci

    a = 1;
    b = 1;
    c = a+b;
    cont = 0;

    while (cont <= 100)
    {
        cout << c << "\t";
        cont++;
        a = b;
        b = c;
        c = a + b;
    }
    return 0;
}

