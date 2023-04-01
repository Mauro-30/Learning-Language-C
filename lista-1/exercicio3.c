#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
 
 int idadeDias,idadeAnos,idadeMeses, dia;
 
 printf("Insira a idade em dias: \n");
 scanf("%d",&idadeDias);
 idadeAnos = idadeDias/365;
 idadeMeses = (idadeDias % 365)/30;
 dia = (idadeDias % 365) % 30;
 
 printf("A idade em anos: %d, meses: %d, dias: %d",idadeAnos,idadeMeses,dia);

 return 0;
}

