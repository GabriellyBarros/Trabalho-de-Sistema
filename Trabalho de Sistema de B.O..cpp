#include <stdio.h>
 
 //Dados do Suspeito 
 typedef struct{
	 char nome[100];
	 char apelido[50];
	 int idade_aprox;
	 char cpf[15];
	 char sexo[20];
	 char naturalidade[100];
	 char filiacao[500]; //Nome do pai e da mae 
	 char endereco[100]; //Residencial ou de trabalho
 }Identificacao_basica;
 