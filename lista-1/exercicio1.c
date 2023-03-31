#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){

  int base,altura;
  int area,perimetro;
  
  printf("Digite o tamanho da base:\n");
  scanf("%d",&base);
  
  printf("Digite o tamanho da altura:\n");
  scanf("%d",&altura);
  
  area= (base * altura)/2;
  perimetro = (base*2)+(altura*2);
  
  printf("A area do triangulo igual a %d : \n",area);
  printf("O perimetro igual a %d : \n",perimetro);
  
return 0;
}

