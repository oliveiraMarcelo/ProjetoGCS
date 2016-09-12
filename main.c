#include <stdlib.h>
#include <stdio.h>
#include "operacoes.h"

int main(){

	printf("------------ MENU DE OPERACOES -------------\n\n");

	printf("1- Soma\n");
	printf("2- Subtracao\n");
	printf("3- Multiplicacao\n");
	printf("4- Divisao\n");
	printf("0- Sair\n");

	int opcao;
	int number1;
	int number2;

	do{

		scanf("%d", &opcao);

		if(opcao !=0){
		printf("Digite o numero: \n");
		scanf("%d", &number1);

		printf("Digite o numero: \n");
		scanf("%d", &number2);
		}

		switch (opcao){
			case 1:

			break;

			case 2:

			break;

			case 3:

			break;

			case 4:

			break;

			case 0:
				exit(1);
			break;
		}

	}while(opcao!=0);

}