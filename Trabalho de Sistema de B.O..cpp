#include <stdio.h>
#include <stdlib.h> 

  typedef struct{
 //Dados do Suspeito pessoa física
 typedef struct{
 	 int Id_do_suspeito;
	 char nome[100];
	 char alcunha_vulgo[50];
	 char data_de_nascimento[11];//"xx/xx/xxxx"
     int idade_aprox;
	 char CPF[15];
	 char RG[12];
	 char sexo[20];
	 char naturalidade[100];
	 char filiacao[500]; //Nome do pai e da mae 
	 char endereco[100]; //Residencial ou de trabalho
	 char profissao[50];
 }Identificacao_basica_pessoa_fisica;
 
 //Descricao detalhada do suspeito
 typedef struct{
 	float altura_aprox;
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
 	char endereco_do_ocorrido[70];//bairro,cidade
 	char telefone_celular[20];//formato (xx) 9xxxx-xxxx
 	char redes_sociais[50];
 	char locais_frequentes[100];//onde costuma ser visto
 	char testemunhas_ou_vitimas[500];//informar dados de testesmunhas ou vitimas 
 	
 }Dados_de_localizacao_e_contato;
 
 //Dados da pessoa jurídica envolvida (o vínculo)
 typedef struct{
 	char razao_social[100];//nome social de registro da empresa
 	char nome_fantasia[100];//nome comercial/nome da fachada
 	char cnpj[20];
 	
	 
	 
	 
	 
	 
	 
 }Dados_PJ;
 	
//Dados da fuga
typedef struct{
	char modo_de_evasao[50];//especificar se foi a pe,em veiculo roubado ou em transporte publico
	int tem_cumplices;//1 para sim, 0 para nao
	char nome_ou_apelido_dos_cumplices[500];
	char papel_dos_cumplices[200];//Se era o motorista,se deu cobertura ou se forneceu o veiculo
	char descricao_cumplices[500];//descricao das caracteristicas dos envolvidos(ex.:roupa,cor e formato dos olhos,tipo de corte de cabelo,cor,bigode,etc)
	char direcao_fuga[100];//para onde fugiu,localizacao de fuga 
	char ponto_de_referencia_de_fuga[100];//ex:passou em frente ao posto de saude
	char ultima_visualizacao[50];//cruzamento exato ou ultima camera que registrou 
}Informacao_da_fuga;

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
    char tipo_pelicula[30];//comum,espelhada
 	char estado_pelicula[50];//rasgado,com bolhas 
 	char detalhe_das_rodas[50];//sem calota,roda esportiva
 	char caracteristicas_especificas[100];//adesivos,amassados,farois queimados
 }Dados_do_veiculo;
 
 //Dinamica do envolvimento
 typedef struct{
	 char relacao_com_a_vitima[50];//conhecido,vizinho,ex-parceiro,desconhecido
	 char papel_no_crime[50];//autor,coautor,mandante,receptador
	 char armamento_utilizado_no_crime[50];//arma de fogo,arma branca,sem arma
	 char forma_de_acao[60];//agressivo,calmo 
 }Dinamica_do_envolvimento;		 	 

 //Dados do ocorrido
 typedef struct{
	 char natureza_do_ocorrido[50];//roubo,furto,dano,tráfico,etc
	 char status_do_fato[20];//se o crime foi concluído ou interrompido
	 char data_e_hora[20];//ex.: "xx/xx/xxxx xx:xx"
	 char endereco_completo_do_local[100];//rua,numero,bairro,cidade,UF
	 char tipo_de_local[50];//via pública,residência,comércio,interior de veículo
	 char ponto_de_referencia[50];//esquina, nome da loja próxima,etc
	 char relato_detalhado_do_crime[2000];//descricao de como o crime ocorreu	
	 char tipo_de_objeto_envolvido[50];//celular,dinheiro,joia,documento,etc
	 char descricao_do_objeto[50];//marca,modelo,cor,estado de conservação
	 char identificacao_tecnica_do_objeto[50];//IMEI de celular ou número de série
	 int quantidade_do_objetos;
	 float valor_do_prejuizo;
	 char meio_empregado[50];//arrombamento,chave falsa,escalada,destreza
	 char uso_de_violencia_ou_ameaca[50];//sim ou não e qual tipo
	 char preservacao_do_local[10];//se o local foi isolado para a policia
	 char vestigios_deixados_no_local[70];//objetos esquecidos pelo suspeito,sangue,etc
	 char existencia_de_cameras_de_monitoramento[5];//sim ou não	 
 }Dados_do_ocorrido;
 
  }Dados_do_suspeito;
  
int main(){
	int status= 1, id=0, c; 
	Dados_do_suspeito orders[99];
	
	while(status){
        printf("Escolha uma opcao");
		int opcao;
		scanf("%d", &opcao);
		
		switch(opcao){
			case 1:
			    //Dados do Suspeito 
			    orders[id].Id_do_suspeito= id + 1;
			    printf("order Id_do_suspeito: %d", id + 1);
			    
			    for(int i=0; i<99; i++){
			    	while((c= getchar()) != '\n' && c!=EOF);
			    	
			    	printf("Digite o nome do suspeito");
					char nome[100];
					fgets(nome, sizeof(nome), stdin);
					
					printf("Digite o alcunha/vulgo");
                    char alcunha_vulgo[50];
                    fgets(alcunha_vulgo, sizeof(alcunha_vulgo), stdin);
                    
                    printf("Digite a data de nascimento");
                    char data_de_nascimento[11];
                    
                    printf("Digite a idade aproximada");
                    int idade_aprox;
                    
                    printf("Digite o CPF");
	                char CPF[15];
	                
	                printf("Digite o RG");
	                char RG[12];
	                
	                printf("Digite o sexo");
	                char sexo[20];
	                fgets(sexo, sizeof(sexo), stdin);
	                
	                printf("Digite a naturalidade");
                    char naturalidade[100];
                    fgets(naturaliadade, sizeof(naturalidade), stdin);
                    
                    printf("Digite a filiação");
	                char filiacao[500]; 
					 fgets(filiacao, sizeof(filiacao), stdin);
					 
					printf("Digite o endereço"); 
	                char endereco[100]; 
	                fgets(endereco, sizeof(endereco), stdin);
	                
	                printf("Digite a profissão");
	                char profissao[50];
	                fgets(profissao, sizeof(preofissao), stdin);
	                
	                 //Descricao detalhada do suspeito
	                
	                 printf("Digite a altura aproximada");
	                char altura_aprox[10];
	                
	                
	                printf("Digite a cor de pele");
                    char cor_pele[30];
                    
                    
                    printf("Digite a cor dos olhos");
 	                char cor_olhos[30];
 	                
 	                
 	                printf("Digite o cabelo");
 	                char cabelo[50]; 
 	                
 	                
 	                printf("Digite o porte físico");
 	                char porte_fisico[50];
 	                
 	                
 	                printf("Digite sinais particulares");
 	                char sinais_particulares[200];
 	                
 	                
 	                printf("Digite vestuário");
 	                char vestuario[150];
 	                
 	                
 	                printf("Digite vícios/hábitos");
 	                char vicios_habitos[500];
 	                
 	                
 	                
 	                 //Dados de localizacao e contato
  
  					printf("Digite o endereço do ocorrido");
	                char endereco_do_ocorrido[70];
	                
	                
	                printf("Digite o telefone/celular");
                	char telefone_celular[20];
                	
                	
                	printf("Digite as redes sociais ");
 	                char redes_sociais[50];
 	                
 	                
 	                printf("Digite os locais frequentes");
 	                char locais_frequentes[100];
 	                
 	                
 	                printf("Digite testemunhas ou vítimas");
                 	char testemunhas_ou_vitimas[500];
                 	
                 	
                 	
                 	//Dados da fuga
                 	
                 	printf("Digite o modo de evasão");
                 	char modo_de_evasao[50];
                 	
                 	
                 	printf("Digite tem cúmplices?");
	                int tem_cumplices;
	                
	                
	                printf("Digite nome ou apelido dos cúmplices");
	                char nome_ou_apelido_dos_cumplices[500];
	                
	                
	                printf("Digite papel dos cúmplices");
	                char papel_dos_cumplices[200];
	                
	                
	                printf("Digite descrição dos cúmplices");
	                char descricao_cumplices[500];
	                
	                
	                printf("Digite direção da fuga");
	                char direcao_fuga[100];
	                
	                
	                printf("Digite ponto de referência");
	                char ponto_de_referencia_de_fuga[100];
	                
	                
	                printf("Digite última visualização");
	                char ultima_visualizacao[50];
	                
	                
	                
	                //Dados sobre o veiculo(se envolvido)
	                
	                printf("Digite tipo de veículo");
	                char tipo_de_veiculo[20];
	                
	                
	                printf("Digite placa");
                    char placa[10];
                    
                    
                    printf("Digite marca");
 	                char marca[30];
 	                
 	                
 	                printf("Digite modelo");
 	                char modelo[50];
 	                
 	                
 	                printf("Digite cor");
 	                char cor[20];
 	                
 	                
 	                printf("Digite ano");
 	                int ano;
 	                
 	                
 	                printf("Digite estado de conservação");
                	char estado_de_conservacao[50];
                	
                	
                	printf("Digite nível de insulfilm");
                	char nivel_insulfilm[10];
                	 
                	 
                	 printf("Digite tipo de película");
 	                char tipo_pelicula[30];
                	
                	
                	printf("Digite estado da película");
 	                char estado_pelicula[50]; 
 	                
 	                
 	                printf("Digite detalhe das rodas");
 	                char detalhe_das_rodas[50];
 	                
 	                
 	                printf("Digite características específicas");
 	                char caracteristicas_especificas[100];
 	                
 	                
 	                
 	                //Dinamica do envolvimento
 	                
                    printf("Digite relação com a vítima");
 	                char relacao_com_a_vitima[50];
 	                
 	                
                    printf("Digite função do suspeito");
	                char papel_no_crime[50];
	                
	                
                    printf("Digite armamento utilizado no crime");
	                char armamento_utilizado_no_crime[50];
	                
	                
	                printf("Digite forma de ação");
	                char forma_de_acao[60];
	                
	                
	                printf("Digite relato do crime");
	                char relato_do_crime[2000];
	                
	                //Dados do ocorrido
	                
 	                char natureza_do_ocorrido[50];
 	                
 	                
	                char status_do_fato[20];
	                
	                
	                char data_e_hora[20];
	                
	                
	                char endereco_completo_do_local[100];
	                
	                
	                char tipo_de_local[50];
	                
	                
	                char ponto_de_referencia[50];
	                
	                
	                char relato_detalhado_do_crime[2000];
					
						
	                char tipo_de_objeto_envolvido[50];
	                
	                
	                char descricao_do_objeto[50];
	                
	                
	                char identificacao_tecnica_do_objeto[50];
	                
	                
	                int quantidade_do_objetos;
	                
	                
	                float valor_do_prejuizo;
	                
	                
	                char meio_empregado[50];
	                
	                
	                char uso_de_violencia_ou_ameaca[50];
	                
	                
	                char preservacao_do_local[10];
	                
	                
	                char vestigios_deixados_no_local[70];
	                
	                
	                char existencia_de_cameras_de_monitoramento[5];
	                
	                
	                
				}
			    break;
			caso 2:
                break;
            caso 3:
                status= 0;
                break;
			
		}
		
		
	}
	 return 0;	  
 } 
 
 
 
 
 