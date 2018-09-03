#include<stdio.h>
#include<conio.h>
// declaração de variáveis
float MD[8];
float SOMA, MEDIA;
int i;
int main( )
{
 SOMA = 0;
 for(i = 0;i <= 7;i++)
 {
 printf("Entre com o valor %d da tabela.", i);
 scanf("%f",&MD[i]);
 SOMA = SOMA + MD[i];
 }
 MEDIA = SOMA / 8;
 printf("Media Geral: %f\n",MEDIA);
 printf("%f %f %f %f \n%f %f %f %f " ,MD[0],MD[1],MD[2],MD[3],MD[4],MD[5],MD[6],MD[7]);
 getche();
}
