#include<stdio.h>
#include<stdlib.h>

//2. Desenvolver um programa que efetue a leitura dos nomes de 8 alunos e também
//suas 4 notas bimestrais. Ao final o programa deverá apresentar o nome de cada
//aluno, bem como suas médias e a média geral dos 8 alunos.

int main(){
	char nome[8][100];
	float notas[8][5];
	int i,j;
	float soma,mediag,mediona;
	//Leitura dos nomes
	for(i=0;i<8;i++){
		printf("Digite o nome do aluno %d: ",i+1);
		gets(nome[i]);
	}
	//Leitura das notas
	for(i=0;i<8;i++){
		for(j=0;j<4;j++){
		printf("Digite a nota do aluno %d no bimestre %d: ", i+1,j+1);
		scanf("%f",&notas[i][j]);
		}
	}
	//calculo das médias
	for(i=0;i<8;i++){
		soma=0;
		for(j=0;j<4;j++){
			soma=soma+notas[i][j];
		}
		notas[i][4]=soma/4;
	}
	//media geral
	mediona=0;
	for(i=0;i<8;i++){
		mediona=mediona+notas[i][4];
	}
	mediag=mediona/8;
	//apresentar
	for(i=0;i<8;i++){
		for(j=0;j<4;j++){
			printf("A nota do aluno/a %s no bimestre %i foi: %f\n",nome[i],j+1,notas[i][j]);
		}
		printf("\nA media do aluno/a %s no ano foi: %f\n\n", nome[i],notas[i][4]);
	}
	//apresentar media geral
	printf("A media geral da sala foi: %f\n", mediag);
	//acabar programa
	system("PAUSE");
	return 0;
}
