#include<stdio.h>

typedef enum {JANEIRO=1,FEVEREIRO,MARCO,ABRIL,MAIO,JUNHO,JULHO,AGOSTO,SETEMBRO,OUTUBRO,NOVEMBRO,DEZEMBRO} Mes;

int ContaDias(int mes){
	if(mes == FEVEREIRO) {
		return 28;
	} else if(mes == JANEIRO || mes == MARCO || mes == MAIO || mes == JULHO || mes == AGOSTO || mes == OUTUBRO || mes == DEZEMBRO) {
		return 31;
	}
	 else {
		return 30;
	}
}

int MesValido(int mes){
	return (mes >= JANEIRO) && (mes <= DEZEMBRO);
}

int DiaValido(int mes, int dia) {
  	return (dia >= 1) && (dia <= ContaDias(mes));	
}	

int UltimoDiaDoMes(int mes, int dia){
	return ContaDias(mes) == dia;
}

int FimDoAno(int mes, int dia) {
	return (mes==DEZEMBRO) && (UltimoDiaDoMes(mes,dia));
}

int main()
{
   int dia,mes,ano=2023;
   
   printf("Insira o dia e o mes (dd-mm): ");
   scanf("%2d-%2d",&dia,&mes);
   
   if(!MesValido(mes)){
   	  puts("Mês invalido!\n");
   	  return -1;
   }
   if(!DiaValido(mes,dia)){
   	   puts("Dia invalido!\n");
   	   return -1;
   }
   if(FimDoAno(mes,dia)){
   	  dia = mes = 1;
   	  ano++;
   } else {
   		if(UltimoDiaDoMes(mes,dia)){
   	 	dia = 1;
   	 	mes++;
	} else {
		dia++;
	}
   }
   printf("\n%02d-%02d-%4d\n",dia,mes,ano);
   return 0;
}
