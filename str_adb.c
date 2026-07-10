#include "str_adb.h"
#include <stdio.h>
#include <stdlib.h>

char* aloca_str(int tam)
{
	char* str = (char*) malloc(sizeof(char) * tam);
	if (!str)
		return PTR_NULO;
	
	str[tam - 1] = '\0';
	return str;
}
int tam_str(char* str)
{
	int i = 0;
	while(str[i] != '\0')
		i++;
	return (i + 1);
}
int tam_str_char(char* str, char c)
{
	int i = 0;
	while(str[i] != c)
		i++;
	
	if (str[i] == c)
		return -1;

	return (i + 1);
}
void copia_str(char* str, char* str_copiada)
{
	int tam = tam_str(str);
	for (int i = 0 ; i < tam ; i++)
		str_copiada[i] = str[i];
}
char* cria_copia_str(char* str)
{
	int tam = tam_str(str);
	char* str_copiada = aloca_str(tam);
	if (str_copiada == PTR_NULO)
		return PTR_NULO;

	for (int i = 0 ; i < tam ; i++)
		str_copiada[i] = str[i];

	return str_copiada;
}
void preenche_str(char* str, char c)
{
	int tam = tam_str(str);
	for (int i = 0 ; i < tam ; i++)
		str[i] = c;
}
int compara_str(char* str1, char* str2)
{
	int tam = tam_str(str1);
	int diffs = 0;
	for(int i = 0 ; i < tam ; i++)
		if (str1[i] != str2[i])
			diffs++;
	return diffs;
}

int sub_str(char* str, char* substr)
{

}

int quant_sub_str(char* str, char* substr)
{

}

char** separa_str_char(char* str, char c)
{

}

char** separa_str_pos(char* str, int posicao)
{

}

int substitui_sub_str(char* str, char* sub_str, char* nova_sub_str)
{

}

int substitui_str(char* str, char* sub_str, char* nova_sub_str)
{

}

char* ordena_str(char* str)
{

}

int* hist_str(char* str)
{

}