#include<stdio.h>
#include<stdlib.h>

int main (){
	int xi, xf, i, r;
	
	
	printf("Digite o valor inicial: ");
	scanf("%d",&xi);
	printf("\nDigite o valor final: ");
	scanf("%d", &xf);
	/*Solução aprendizes Jedi
	for(i=xi;i<=xf;i++)
	{
		r=i*i;
		printf("\n\nO quadrado de %d e %d\n", i, r);	
	}
	*/
	//Solução Yoda
	for(xi;xi<=xf;xi++)
	{
		printf("\n\nO quadrado de %d e %d",xi,xi*xi);
	}
	system ("PAUSE");
	return 0;
}
