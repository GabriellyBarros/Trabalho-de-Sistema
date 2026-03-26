#include <stdio.h>
 
  
 //Dados do Suspeito 
 typedef struct{
	 char nome[100];
	 char alcunha_vulgo[50];
     int idade_aprox;
	 char cpf[15];
	 char sexo[20];
	 char naturalidade[100];
	 char filiacao[500]; //Nome do pai e da mae 
	 char endereco[100]; //Residencial ou de trabalho
	 char profissao[50];
 }Identificacao_basica;
 
 //Descricao dealhada do suspeito
 typedef struct{
 	char altura_aprox[10];
 	char cor_pele[30];
 	char cor_olhos[30];//cor,formato
 	char cabelo[50]; //cor,corte,tipo:cacheado,ondulado,liso,careca
 	char porte_fisico[50];//magro,atletico,obeso
 	char sinais_particulares[200];//tatuagens-local e desenho,cicatrizes,piercings,barba,bigode,uso de oculos
 	char vestuario[150];//descricao das roupas,cores,marca de bone/tenis,mochilas
 	char vicios_habitos[500];//Se e fumante,canhoto,possui tiques nervosos ou modo de falar especifico(girias,sotaque)
 }Caracteristicas_fisicas;
 
 //Dados de localizacao e contato
 typedef struct{
 	char telefone_celular[20];//formato (xx) 9xxxx-xxxx
 	char redes_sociais[50];
 	char locais_frequentes[100];//onde costuma ser visto
 }Dados_de_localizacao_e_contato;
 
 //Dados sobre o veiculo(se envolvido)
 typedef struct{
 	char tipo_de_veiculo[20];//carro,moto,caminhao,etc
 	char placa[10];
 	char marca[30];//informar fabricante:Fiat,Ford,etc
 	char modelo[50];//informar o nome do carro:Uno,Gol,Onix,etc
 	char cor[20];//cor predominante
 	int ano;
 	char estado_de_conservacao[50];//muito velho,pintura nova 
 	char nivel_insulfilm[10];//pelicula de controle solar
 	char estado_pelicula[50];//rasgado,com bolhas
 	char tipo_pelicula[30];//comum,espelhada 
 	char rodas_detalhes[50];//sem calota,roda esportiva
 	char caracteristicas_especificas[100];//adesivos,amassados,farois queimados
 }Dados_do_veiculo 
 	
//Dados da fuga
typedef struct{
	int num_ocupantes;//quantos suspeitos estavam no veiculo 
	char direcao_fuga[100];//para onde fugiu,localizacao de fuga 
	char ponte_de_referencia_de_fuga[100];//ex:passou em frente ao posto de saude
	char ultima_visualizacao[50];//cruzamento exato ou ultima camera que registrou 
	int furou_sinal;



	
	
	
	
}Informacao da fuga
 	
 	
 	
	 
	 
	 
	 
	 
 }Dados_sobre_o_veiculo
int main(){
	
	 return 0;	  
 } 
 
 
 
 
 