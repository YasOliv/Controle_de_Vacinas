#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

struct paciente
{
 char nome[100];
 char cpf[15];
 char vacina[30];
 char data[30];
 char lote[30];
};
int main(){
	 setlocale(LC_ALL, "Portuguese");
	 struct paciente cadastro;
	 struct paciente aplicacoes[1000];
	 int i, consulta, op, quantidade;
	 char cpf [30];
	 quantidade = 0;
	 while (op !=4){
	 		printf("MENU DE OPÇÕES\n");
		 	printf(" \n");
		 	printf("1 - Cadastrar vacina\n");
		 	printf("2 - Listar aplicações\n");
		 	printf("3 - Consultar por CPF\n");
		 	printf("4 - Sair\n");
		 	printf("Digite a opção desejada: ");
		 	scanf("%d", &op);
		 	fflush(stdin);
		 	if(op == 1){
		 		system ("cls");
			 	printf("OPÇÃO 1\n");
			 	printf("CADASTRAR DADOS\n");
			 	printf(" \n");
			 	printf("Digite o nome do paciente: ");
			 	gets(aplicacoes[quantidade].nome);
			 	fflush(stdin);
			 	printf("Digite o CPF do paciente: ");
			 	scanf("%s", &aplicacoes[quantidade].cpf);
			 	fflush(stdin);
			 	printf("Digite o nome da vacina: ");
			 	scanf("%s", &aplicacoes[quantidade].vacina);
			 	fflush(stdin);
			 	printf("Digite a data de aplicação: ");
			 	scanf("%s", &aplicacoes[quantidade].data);
			 	fflush(stdin);
			 	printf("Digite o número do lote: ");
			 	scanf("%s", &aplicacoes[quantidade].lote);
			 	printf(" \n");
			 	printf("\nDADOS CADASTRADOS COM SUCESSO\n");
			 	fflush(stdin);
			 	quantidade++;
			 	fflush(stdin);
			 }
			 else{
			 	if(op == 2){
			 	 	system("cls");
			 	 	printf("OPÇÃO 2\n");
			 		printf("APLICAÇÕES CADASTRADAS:\n");
			 		for (i=0; i<quantidade; i++){
			 			printf("CÓDIGO: %d\n", i);
					 	printf("NOME: %s\n", aplicacoes[i].nome);
					 	printf("CPF: %s\n", aplicacoes[i].cpf);
					 	printf("VACINA: %s\n", aplicacoes[i].vacina);
					 	printf("DATA: %s\n", aplicacoes[i].data);
					 	printf("LOTE: %s\n", aplicacoes[i].lote);
					 	printf("===============================\n");
					 }
					 i=0;
				}
					 else{
					 	if (op == 3){
					 		consulta=0;
						 	i=0;
						 	system("cls");
						 	printf("OPÇÃO 3\n");
						 	printf("CONSULTAR POR CPF\n");
						 	printf("Digite o CPF que deseja buscar: ");
						 	scanf ("%s", &cpf);
						 	fflush(stdin);
						 	while (consulta == 0 && i<quantidade){
						 		if (!strcmp(aplicacoes[i].cpf, cpf)){
						 			consulta = 1;
								 }
								 else{
								 	i++;
								 }
							 }
							 if (consulta == 1){
							 	printf("\nCPF ENCONTRADO!\n");
							 	printf("CÓDIGO: %d\n", i);
							 	printf("NOME: %s\n", aplicacoes[i].nome);
							 	printf("CPF: %s\n", aplicacoes[i].cpf);
							 	printf("VACINA: %s\n", aplicacoes[i].vacina);
							 	printf("DATA: %s\n", aplicacoes[i].data);
							 	printf("LOTE: %s\n", aplicacoes[i].lote);
							 }
							 else{
							 	printf("\nCPF NÃO ENCONTRADO!\n");
							 }
						 }
						 if (op ==4){
						 	system("cls");
							printf("OPÇÃO 4: SAIR\n\n");
							printf("O sistema foi finalizado!");
						 }
					 }
				 }
			 }
	 return 0;
	 }
	
