#include<stdio.h>
#include<stdlib.h>
//3.Desenvolver um programa de agenda que cadastre o nome, endereço, CEP, bairro e telefone de 10 pessoas. 
//Ao final, o programa deverá apresentar os elementos que foram cadastrados.

int main(){
	char nome[10][100];
	char endereco [10][100];
	char cep [10][9];
	char bairro [10][100];
	char telefone [10][15];
	int i;
	for(i=0;i<10;i++){
		printf("Digite o nome da pessoa %i: ",i+1);
		gets(nome[i]);
		fflush(stdin);
		}
	for(i=0;i<10;i++){
		printf("Digite o endereco da pessoa %i: ",i+1);
		gets(endereco[i]);
		fflush(stdin);
		}
	for(i=0;i<10;i++){
		printf("Digite o cep da pessoa %i: ",i+1);
		gets(cep[i]);
		fflush(stdin);
		}
	for(i=0;i<10;i++){
		printf("Digite o bairro da pessoa %i: ",i+1);
		gets(bairro[i]);
		fflush(stdin);
		}
	for(i=0;i<10;i++){
		printf("Digite o telefone da pessoa %i: ",i+1);
		gets(telefone[i]);
		fflush(stdin);
		}
	for(i=0;i<10;i++){
		printf("Nome:%s Endereco:%s Cep:%s Bairro:%s Telefone:%s \n", nome[i],endereco[i],cep[i],bairro[i],telefone[i]);
	}
}
