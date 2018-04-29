/*
 * le_arquivo-v2.c
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

/* le um arquivo texto previamente gravado e exibe o conteudo na tela
 * le linha-a-linha
 */
 
#include <stdio.h>

int main(int argc, char **argv)
{
	FILE *f;	/* declara o arquivo */
	char s[256];
	
	f = fopen("dados.txt","r");		/* abre o arquivo para leitura */

	if (f==NULL)		/* a operacao de abertura foi ok? */
	{
		printf("erro ao abrir arquivo!!!\n");
	}
	else
	{
		while (! feof(f))	/* enquanto nao for fim de arquivo... */
		{
			fgets(s,255,f);		/* le uma linha do arquivo */
			printf("%s",s);		/* exibe a linha lida na tela */
		}
		fclose(f);		/* fecha o arquivo */
	}
	return 0;
}

