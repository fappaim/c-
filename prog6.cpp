// prog06.cpp
// Fazer um programa que recebe um símbolo de operação do usuário
// (+, -, / ou *) e dois números reais. O programa deve retornar o
// resultado da operação recebida sobre estes dois números.

#include<iostream>

using namespace std;

int main(void)
{
    double x,y,z; // valores fornecidos pelo usuario
    char op;

    cout << "informe a operacao (+,-,/,*): ";
    cin >> op;
    cout << "informe o valor de x: ";
    cin >> x;
    cout << "informe o valor de y: ";
    cin >> y;

    // faz o calculo de acordo com o operador informado

    switch(op) {
        case '+':
            z = x+y;
            break;
        case '-':
            z = x-y;
            break;
        case '/':
            if (y!=0)
                z = x/y;
            break;
        case '*':
            z = x*y;
            break;
    }

    // resultado

    cout << "resultado da operacao: " << z << "\n";
    return 0;
}

