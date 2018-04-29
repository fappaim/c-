/*
 * calcula_imc.c
 * 
 * Copyright 2012 fernando paim <fernandopaim@paim.pro.br>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */

/* Enunciado
 * Faça uma função que dada a altura e peso de uma pessoa, ela calcula
 * seu IMC e exibe alguma das frases abaixo de acordo com o valor
 * retornado.
 * < 18,5 Magreza
 * 18,6 – 24,9 Saudável
 * 25,0 – 29,9 Peso em excesso
 * >= 30 Obeso
 * 
 * Notas:
 * Utilizar uma struct para guardar os dados do individuo.
 * Fazer alocação dinâmica de todas variaveis.
 * O IMC é determinado pela divisão da massa do indivíduo pelo
 * quadrado de sua altura
 */

#include <stdio.h>
#include <stdlib.h>		/* exit() */
#include <malloc.h>		/* alocacao dinamica */

struct DadosIMC {
	float altura;
	float peso;
};

void ReceberDados(struct DadosIMC *dados);
float CalcularIMC(struct DadosIMC *dados);

int main(int argc, char **argv)
{
	float r;	/* resultado da funcao CalculaIMC */
	struct DadosIMC *individuo;	/* dados de individuo */
	
	/* alocando dinamicamente a struct */
	
	individuo = (struct DadosIMC*)malloc(sizeof(struct DadosIMC));
	
	if (!individuo)
	{
		printf("erro na alocacao de memoria!!!");
		exit(1);
	}
	
	ReceberDados(individuo);
	r = CalcularIMC(individuo);
	
	if (r < 18.5)
	{
		printf("%f, Magreza", r);
	}
	else
	{
		if (r >= 18.6 && r <= 24.9)
		{
			printf("%f, Saudavel", r);
		}
		else
		{
			if (r >= 25.0 && r <= 29.9)
			{
				printf("%f, Peso em excesso", r);
			}
			else
			{
				printf("%f, Obeso", r);
			}
		}
	}

	return 0;
}
/*------------------------------------------------------------*/
void ReceberDados(struct DadosIMC *dados)
{
	printf("informe a altura em metros (1.80): ");
	scanf("%f", &dados->altura);
	printf("informe o peso em kg (100.0): ");
	scanf("%f", &dados->peso);
	return;
}
/*------------------------------------------------------------*/
float CalcularIMC(struct DadosIMC *dados)
{
	/* O IMC é determinado pela divisão da massa do indivíduo pelo
	 * quadrado de sua altura
	 */
	 
	float imc;
	 
	imc = dados->peso / (dados->altura * dados->altura);
	return imc;
}
/*------------------------------------------------------------*/

