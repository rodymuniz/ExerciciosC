#include<stdio.h>
#include<stdlib.h>

int main(){
	//2.Desenvolver um programa que efetue a leitura dos nomes de 8 alunos e também suas 4 notas bimestrais.
	// Ao final o programa deverá apresentar o nome de cada aluno, bem como suas médias e a média geral dos 8 alunos.
	float alu[8][5], soma=0;
	char nome[8][100];
	int i,j;
	printf("== 	Notas.exe by Rodrigo Muniz	==\n");
	for(i=0;i<8;i++){
		printf("Favor digitar nome do aluno %d: \n",i+1);
		gets(nome[i]);
	}
	for(i=0;i<8;i++){
		for(j=0;j<4;j++){
		printf("Digite a nota do aluno %d no bimestre %d: \n",i+1,j+1);
		scanf("%f",&alu[i][j]);
		}
	}
	for(i=0;i<8;i++){
		for(j=0;j<4;j++){
			alu[i][4] = alu[i][4]+ alu[i][j];	
		}
		alu[i][4]=alu[i][4]/4;
	}
	for(i=0;i<8;i++){
		soma=soma+alu[i][4];
	}
	
	soma=soma/8;
	
	for(i=0;i<8;i++){
		for(j=0;j<4;j++){
			printf("A nota do(a) %s no %d bimestre foi %0.2f\n",nome[i],j+1, alu[i][j]);
		}
		printf("Sua media geral foi %0.2f\n\n",alu[i][4]);
	}
	
	printf("A media geral foi %0.4f\n\n\n", soma);	
	system("pause");
	return 0;
}
