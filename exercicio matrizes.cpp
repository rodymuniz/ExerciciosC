#include<stdio.h>
#include<stdlib.h>
//Exercicio
//Ler e escrever as 4 notas de 10 alunos de uma turma,
//sendo que cada aluno no software deve ser representado por
//um vetor, no qual as 4 notas devem se armazenadas.V
//Posteriormente a média de cada aluno deve ser calculada V e 
//gravada na última posição do vetor correspondenteV
//Para finalizar, a média geral da turma deve ser calculada V
//Apresentar no monitor as notas V e médias de cada aluno V e a média geral

int main(){
	float notas[10][5];
	int i,j;
	float soma,mediag,mediona;
	//Leitura das notas
	for(i=0;i<10;i++){
		for(j=0;j<4;j++){
		printf("Digite a nota do aluno %d no bimestre %d: ", i+1,j+1);
		scanf("%f",&notas[i][j]);
		}
	}
	//calculo das médias
	for(i=0;i<10;i++){
		soma=0;
		for(j=0;j<4;j++){
			soma=soma+notas[i][j];
		}
		notas[i][4]=soma/4;
	}
	//media geral
	for(i=0;i<10;i++){
		mediona=mediona+notas[i][4];
	}
	mediag=mediona/10;
	//apresentar
	for(i=0;i<10;i++){
		for(j=0;j<4;j++){
			printf("A nota do aluno %i no bimestre %i foi: %f\n",i+1,j+1,notas[i][j]);
		}
		printf("\nA media do aluno %i no ano foi: %f\n\n", i+1,notas[i][4]);
	}
	//apresentar media geral
	printf("A media geral foi: %f", mediag);
	//acabar programa
	system("PAUSE");
	return 0;
}
