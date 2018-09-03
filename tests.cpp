#include <stdio.h>
int main()
{
    char buffer[2][10];
    int i;
    for(i=0;i<2;i++){
    printf("Entre com o seu nome");
    gets(buffer[i]);
	}
	for(i=0;i<2;i++){
    puts( buffer[i]);
	}
    return 0;
	
}
