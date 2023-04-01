#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
	
	int n1,n2;
	float quociente, resto;
	
	printf("Digite o o primeiro número:\n");
  	scanf("%d",&n1);
  	printf("Digite o segundo número:\n");
    scanf("%d",&n2);
    quociente = n1/n2;
    resto = n1%n2;
    printf("O quociente é %f \n",quociente);
    printf("O resto é %f \n",resto);
 return 0;
}

